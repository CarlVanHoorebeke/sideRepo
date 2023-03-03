#include "person.hh"
#include "nft.hh"

Person::Person(const std::string& name, uint money)
:name_(name)
,money_(money)
{}

std::vector<std::string> Person::enumerate_nfts() const
{
    std::vector<std::string> vect;
    for (auto e = nfts_.begin(); e != nfts_.end(); e++)
    {
        vect.push_back(**e);
    }
    return vect;
}

void Person::add_nft(NFT nft)
{
    nfts_.push_back(std::move(nft));
}

NFT Person::remove_nft(const std::string& name)
{
    for (auto e = nfts_.begin(); e != nfts_.end(); e++)
    {
        if (**e == name)
        {
            NFT tmp = std::move(*e);
            nfts_.erase(e);
            return tmp;
        }
    }
    return create_empty_nft();
}

void Person::add_money(uint money)
{
    money_+=money;
}

bool Person::remove_money(uint money)
{
    if (money > money_)
        return false;
    money_ -= money;
    return true;
}

uint Person::get_money() const
{
    return money_;
}

std::string Person::get_name() const
{
    return name_;
}

std::ostream& operator<<(std::ostream& os, const Person& p)
{
    os << "Name: " << p.get_name() << "\n"
       << "Money: " << p.get_money() << "\n";
    for (auto e : p.enumerate_nfts())
    {
        os << "NFTs: " << e << "\n";
    }
    return os;
}