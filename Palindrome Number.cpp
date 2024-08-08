bool palindrome(int n)
{
    // Write your code here
    int dup = n;
    int rev = 0;
    while(n){
        int rem = n%10;
        rev = (rev*10)+rem;
        n/=10;
    }
    if(rev==dup){
        return true;
    }
    return false;
}
