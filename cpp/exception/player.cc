#include "player.hh"
#include "invalid-argument.hh"

#include <iostream>

Player::Player(const std::string& name, unsigned int age)
{
    try
    {
        if (name.empty())
            throw InvalidArgumentException("Name can't be empty");
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }
    try
    {
        if (age > 150)
            throw InvalidArgumentException("Sorry gramp, too old to play.");
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }
    name_ = name;
    age_ = age;
}