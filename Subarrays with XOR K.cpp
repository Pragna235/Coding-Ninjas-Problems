#include<bits/stdc++.h>
using namespace std;

int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    int n = a.size();
    int xr=0;
    int count=0;
    map<int,int> mpp;
    mpp[xr]++;

    for(int i=0;i<n;i++){
        xr = xr^a[i];
        int rem = xr^b;
        count+=mpp[rem];
        mpp[xr]++;
    }
    return count;
}
