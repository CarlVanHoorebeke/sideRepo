#pragma once

#include "enable-if.hh"
#include "is-numerical.hh"

template <typename T, typename = enable_if<std::is_integral<T>::value>::type>
void algorithm(T value) {
    auto res = T{value};
    std::cout << "ok\n";
}

