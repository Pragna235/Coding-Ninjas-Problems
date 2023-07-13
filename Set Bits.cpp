#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

    //Write your countBits function here
    unsigned int countBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}
