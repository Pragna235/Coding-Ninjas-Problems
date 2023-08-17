#include <iostream>

using namespace std;

int multiply(int a, int b)
{
    int mod = 1e9 + 7;
    long long ret = a % mod;
    ret *= (b % mod);
    ret = ret % mod;
    return ret;
}

int *getProductArrayExceptSelf(int *arr, int n)
{
    int *product = new int[n];
    int prefix[n];
    prefix[0] = 1;
    int mod = 1e9 + 7;

    for (int i = 1; i < n; i++)
    {
        prefix[i] = multiply(prefix[i - 1], arr[i - 1]);
    }
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        product[i] = multiply(suffix, prefix[i]);
        suffix = multiply(suffix, arr[i]);
    }

    return product;
}

