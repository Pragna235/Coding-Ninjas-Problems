#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    int coins[]={1,2,5,10,20,50,100,500,1000};
    int n=9;
    int count=0;
    for(int i=n-1;i>=0;i--){
        if(amount>=coins[i]){
            count+=amount/coins[i];
            amount=amount%coins[i];
        }
    }
    return count;
}
