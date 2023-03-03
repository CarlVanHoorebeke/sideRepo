#pragma once

#include "shared-pointer.hh"

#include <cstddef>
#include <memory>
#include <type_traits>

template<typename T>
SharedPointer<T>::SharedPointer(T* p)
: data_(p)
{
    count_ = new long(1);
}

template<typename T>
SharedPointer<T>::~SharedPointer()
{
    *count_ = *count_ - 1;
    if (*count_ == 0)
    {
        if (data_ != nullptr)
        {
            delete data_;
        }
        delete count_;
    }
}


template<typename T>
SharedPointer<T>::SharedPointer(const SharedPointer<T>& other)
: data_(other.data_)
{
    *other.count_ = *other.count_ + 1;
    count_ = other.count_;
}

template<typename T>
void SharedPointer<T>::reset(T *p)
{
    if (data_ != p)
    {
        *count_ = *count_ - 1;
        if ( *count_ == 0)
        {
            if (data_ != nullptr)
            {
                delete data_;
            }
            delete count_;
        }
        data_ = p;
        count_= new long(1);
    }
}

template<typename T>
SharedPointer<T>& SharedPointer<T>::operator=(SharedPointer<element_type>& other)
{
    if (*count_ == 0)
    {   
        if (data_ != nullptr)
        {
            delete data_;
        }
        delete count_;
    }
    else if (*count_ == 1)
    {
        *count_ = 0;
        if (data_ != nullptr)
        {
            delete data_;
        }
        delete count_;
    }
    else
    {
        *count_ = *count_ - 1;
    }
    *other.count_ = *other.count_ + 1;
    count_ = other.count_;
    data_ = other.data_;
    return *this;
}

template<typename T>
T& SharedPointer<T>::operator*() const
{
    return *data_;
}

template<typename T>
T* SharedPointer<T>::operator->() const
{
    return data_;
}

template <typename T> 
template <typename U>
bool SharedPointer<T>::operator==(const SharedPointer<U>& rhs) const
{
    if (data_ == rhs.data_)
        return true;
    return false;
}

template <typename T> 
template <typename U>
bool SharedPointer<T>::operator!=(const SharedPointer<U>& rhs) const
{
    if (data_ == rhs.data_)
        return false;
    return true; 
}

template <typename T> 
bool SharedPointer<T>::operator==(const T* p) const
{
    if (data_ == p)
        return true;
    return false;
}

template <typename T> 
bool SharedPointer<T>::operator!=(const T* p) const
{
    if (data_ == p)
        return false;
    return true;
}

template <typename T>
SharedPointer<T>::operator bool() const
{
    if (data_ == nullptr)
        return false;
    return true;
}


template <typename T>
template <typename U>
bool SharedPointer<T>::is_a() const
{
    return std::is_same<U, T>();
}
