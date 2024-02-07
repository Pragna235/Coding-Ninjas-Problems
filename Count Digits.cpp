/*
    Time Complexity: O(log(n))

    Space Complexity: O(1)

    Where 'n' is the given number.
*/

int countDigits(int n)
{
    // Initializing 'cur' and 'ans'.
    int num = n, ans = 0;

    // Iterating while 'cur' > 0.
    while (n > 0)
    {
        // 'd_0' gives us the digit at 'ones' place decimal notation of 'cur'.
        int rev = n % 10;
        if (rev != 0)
        {
            // Incrementing 'ans' by 1 if current digit divides 'n' evenly.
            ans += (num % rev) == 0;
        }
        n /= 10;
    }
    return ans;
}
