#pragma once

template <unsigned int T> constexpr bool is_prime()
{
    if (T == 0 || T == 1)
        return false;
    for (unsigned int i = 2; i < T/2 ; i++)
    {
        if (T % i == 0)
        {
            return false;
        }
    }
    return true;
}