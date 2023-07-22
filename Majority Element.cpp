#include <bits/stdc++.h> 
int majorityElement(vector<int> &nums)
{
    //    Write your code here.
    int n=nums.size();
    int cnt=0;
    int el;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el=nums[i];
        }
        else if(nums[i]==el) cnt++;
        else cnt--;
    }
    return el;

}
