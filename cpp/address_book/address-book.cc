#include "address-book.hh"

bool AddressBook::add(const std::string& full_name, const std::string& email,
                      const std::string& number)
{
    if (full_name.empty())
        return false;
    try {
        ContactDetails contact(number, email);
        book_.insert({ full_name, contact });
        return true;
    } catch (std::invalid_argument& e) {
        return false;
    }
}

std::vector<ContactDetails> AddressBook::find(const std::string& full_name)
{
    std::vector<ContactDetails> contact;
    auto pos = book_.equal_range(full_name);
    for (auto i = pos.first; i != pos.second; ++i)
        contact.push_back(i->second);
    return contact;
}

std::size_t AddressBook::count(const std::string& full_name)
{
    return book_.count(full_name);
}

bool AddressBook::remove(const std::string& full_name, std::size_t index)
{
    if (index >= book_.count(full_name))
        return false;

    size_t num = 0;
    auto pos = book_.equal_range(full_name);
    for (auto i = pos.first; i != pos.second; i++)
    {
        if (num == index)
        {
            book_.erase(i);
            return true;
        }
        num++;
    }
    return false;
}

void AddressBook::remove_all(const std::string& full_name)
{
    auto pos = book_.equal_range(full_name);
    book_.erase(pos.first, pos.second);
}

std::ostream& operator<<(std::ostream& os, const AddressBook& b)
{
    os << b.book_.size() << " contact(s) in the address book.\n";
    for (auto i = b.book_.begin(); i != b.book_.end(); i++)
    {
        os << "- " << i->first << ": " << i->second;
    }
    return os;
}