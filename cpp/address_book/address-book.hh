#pragma once

#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <string>
#include <vector>

#include "contact-details.hh"

class AddressBook
{
public:
    bool add(const std::string& full_name, const std::string& email,
             const std::string& number);
    std::vector<ContactDetails> find(const std::string& full_name);
    std::size_t count(const std::string& full_name);
    bool remove(const std::string& full_name, std::size_t index);
    void remove_all(const std::string& full_name);
    friend std::ostream& operator<<(std::ostream& os, const AddressBook& b);

protected:
    std::multimap<std::string, ContactDetails> book_;
};
