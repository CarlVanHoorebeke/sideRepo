constexpr unsigned long long factorial(unsigned int n)
{
    if (n == 0)
        return 1;

    unsigned int res = 1;
    for (unsigned int i = 2; i <= n; i++)
    {
        res *= i;
    }
    return res;
}