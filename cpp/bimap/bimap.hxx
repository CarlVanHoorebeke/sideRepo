#pragma once

#include "bimap.hh"


template <typename T1, typename T2>
void Bimap<T1, T2>::insert(const T1& v1, const T2& v2)
{
    lhs.insert({v1, v2});
    rhs.insert({v2, v1});
}

template <typename T1, typename T2>
void Bimap<T1, T2>::insert(const T2& v1, const T1& v2)
{
    lhs.insert({v2, v1});
    rhs.insert({v1, v2});
}

template <typename T1, typename T2>
void Bimap<T1, T2>::erase(const T1& v1)
{
    lhs.erase(v1);
    for (auto i = rhs.begin(); i != rhs.end(); i++)
    {
        if (v1 == i->second)
        {
            rhs.erase(i);
            break;
        }
    }
}

template <typename T1, typename T2>
void Bimap<T1, T2>::erase(const T2& v2)
{
    rhs.erase(v2);
    for (auto i = lhs.begin(); i != lhs.end(); i++)
    {
        if (v2 == i->second)
        {
            lhs.erase(i);
            break;
        }
    }
}

template <typename T1, typename T2>
typename std::map<T1, T2>::iterator Bimap<T1, T2>::find(const T1& v)
{
    return lhs.find(v);
}

template <typename T1, typename T2>
typename std::map<T2, T1>::iterator  Bimap<T1, T2>::find(const T2& v)
{
    return rhs.find(v);
}


template <typename T1, typename T2>
std::size_t Bimap<T1, T2>::size() const
{
    return lhs.size();
}

template <typename T1, typename T2>
void Bimap<T1, T2>::clear()
{
    lhs.clear();
    rhs.clear();
}
