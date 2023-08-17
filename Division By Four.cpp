#include <bits/stdc++.h> 
void divideByFour(vector<int> &arr){
    // Write your code here.
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]/4 == 0){
            arr[i]=-1;
        }
        else{
            arr[i]=arr[i]/4;
        }
    }
}
