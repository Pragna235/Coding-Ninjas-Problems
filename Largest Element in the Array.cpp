#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int large = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>large) large = arr[i];
    }
    return large;
}
