#pragma once

#include <iostream>

class Person
{
    public:
        Person(const std::string& name, unsigned int age);
        std::string name_get() const;
        unsigned int age_get() const;
        void name_set(const std::string& name);
        void age_set(unsigned int);

    private:
        std::string name_;
        unsigned int age_;
};