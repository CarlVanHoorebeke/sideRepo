#pragma once

#include <iostream>
#include <set>

template <class T>
class Exist
{
public:
    Exist<T>();
    bool operator()(T type);

private:
    T type;
    std::set <T> s;
};

#include "exist.hxx"
