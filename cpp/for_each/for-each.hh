#pragma once

#include <cmath>
#include <iostream>

template <typename iter, typename func>
void my_foreach(iter begin, iter end, func f)
{
    for (iter p = begin; p != end; p++)
        f(*p);
}