#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int n = arr.size();
    int xr=0;
    map<int,int>mpp;
    mpp[xr]++;
    int count=0;
    for(int i=0;i<n;i++){
        xr^=arr[i];
        int rem = xr^x;
        count+=mpp[rem];
        mpp[xr]++;
    }
    return count;
}
