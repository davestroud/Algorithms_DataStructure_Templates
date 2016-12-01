
// Recursive
unsigned int factorial(unsigned int n)
{
    if (n == 0)
       return 1;
    return n * factorial(n - 1);
}

// Factorial
unsigned int iter_factorial(unsigned int n)
{
    unsigned int ret = 1;
    for(unsigned int i = 1; i <= n; ++i)
        ret *= i;
    return ret;
}


// Compile Time
template <int N>
struct Factorial
{
    enum { value = N * Factorial<N - 1>::value };
};

template <>
struct Factorial<0>
{
    enum { value = 1 };
};

void foo()
{
    int x = Factorial<4>::value; // == 24
    int y = Factorial<0>::value; // == 1
}
