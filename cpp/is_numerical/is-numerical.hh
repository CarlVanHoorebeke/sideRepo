#pragma once

#include <iostream>

template< typename T >
struct is_numerical
{
    static const bool value =  std::is_integral<T>::value || std::is_floating_point<T>::value || std::is_same_v<T, char>;
};
