#include "is-prime.hh"

int main()
{
    static_assert(!is_prime<1>(), "prime 1 passed");
    static_assert(is_prime<2>(), "prime 2 passed");
    static_assert(is_prime<3>(), "prime 3 passed");
    static_assert(is_prime<5>(), "prime 5 passed");
    static_assert(is_prime<101>(), "prime 101 passed");
    static_assert(is_prime<449>(), "prime 449 passed");
    static_assert(is_prime<3457>(), "prime 3457 passed");

    return 0;
}
