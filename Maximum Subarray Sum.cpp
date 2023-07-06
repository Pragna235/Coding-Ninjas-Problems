#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long maxi=LONG_MIN;
    long long sum=0;

    int start=0;
    int ansStart=-1,ansEnd=-1;

    for(int i=0;i<n;i++){
        if(sum==0) start=i;

        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            ansStart=start;
            ansEnd=i;
        }
        if(sum<0){
            sum=0;
        }
    }

    if(maxi<0) maxi=0;

    return maxi;
}
