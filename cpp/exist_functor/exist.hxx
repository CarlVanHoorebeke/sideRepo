#pragma once

#include <set>
#include "exist.hh"

template<class T>
Exist<T>::Exist()
:s(std::set<T>())
{}

template<class T>
bool Exist<T>::operator()(T type)
{
    if (s.find(type) == s.end())
    {
        s.insert(type);
        return false;
    }
    return true;
}