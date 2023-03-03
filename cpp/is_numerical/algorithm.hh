#pragma once

#include "enable-if.hh"
#include "is-numerical.hh"

template <typename T,
    typename enable_if<is_numerical<T>::value, bool >::type = true>

void algorithm(T value) {
    value++;
}

