#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    // Write your code here.
    sort(arr,arr+n);
    int ans=1;
    for(int i=0;i<n;i++){
        if(arr[i]==ans){
            ans++;
        }
    }
    return ans;
}
