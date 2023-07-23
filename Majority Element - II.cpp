#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n=arr.size();
    int c1=0,c2=0,e1,e2;

    for(int i=0;i<n;i++){
        if(c1==0 && arr[i]!=e2){
            c1=1;
            e1=arr[i];
        }
        else if(c2==0 && arr[i]!=e1){
            c2=1;
            e2=arr[i];
        }
        else if(arr[i]==e1)c1++;
        else if(arr[i]==e2) c2++;
        else{
            c1--;
            c2--;
        }
    }

    vector<int> res;

    c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==e1)c1++;
        if(arr[i]==e2)c2++;
    }

    int mini=int(n/3)+1;
    if(c1>=mini)res.push_back(e1);
    if(c2>=mini)res.push_back(e2);
    return res;

}
