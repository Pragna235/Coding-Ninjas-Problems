#include <bits/stdc++.h> 
using namespace std;
int minimumSum (vector<int>& arr, int n)
{
    int minimum = INT_MAX;
    int sum=0;
    // Write your code here.
    
 for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<minimum){
            minimum=sum;
        }
        if(sum>0)
        sum=0;
        
    }
    
    
    
   

    return minimum;

    
    
}
