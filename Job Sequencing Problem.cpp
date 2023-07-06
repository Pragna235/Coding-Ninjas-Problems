#include <bits/stdc++.h> 
using namespace std;
bool comparison(vector<int>& job1, vector<int>& job2) {
    
    return job1[1] > job2[1];
}

int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    sort(jobs.begin(),jobs.end(),comparison);
    int n=jobs.size();

    int maxi=jobs[0][0];

    for(int i=0;i<n;i++)
    maxi=max(maxi,jobs[i][0]);

    int slot[maxi+1];

    for(int i=0;i<=maxi;i++){
        slot[i]=-1;
    }

    int jobprofit=0;

    for(int i=0;i<n;i++){
        for(int j=jobs[i][0];j>0;j--){
            if(slot[j]==-1)
            {
                slot[j]=i;
                jobprofit+=jobs[i][1];
                break;
            }
        }
    }

    return jobprofit;
}
