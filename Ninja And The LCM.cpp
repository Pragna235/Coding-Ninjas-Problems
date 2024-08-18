#include <bits/stdc++.h> 
long long LCM(int x, int y)
{
    // Calculate product as long long to avoid overflow
    long long prod = (long long)x * (long long)y;

    // Ensure x is the greater number
    if (x < y) swap(x, y);

    // Calculate GCD using Euclidean algorithm
    while (y) {
        long long rem = x % y;
        x = y;
        y = rem;
    }

    // Calculate LCM using the formula: LCM * GCD = x * y
    long long gcd = x;
    long long lcm = prod / gcd;

    return lcm;
}
