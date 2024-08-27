int noOfSubsets(vector<int> &a, int subsets){
    int sub=1;
    long long sum=0;
    for(int i=0;i<a.size();i++){
        if(a[i] + sum <= subsets){
            sum+=a[i];
        }
        else{
            sub++;
            sum = a[i];
        }
    }
    return sub;
}

int largestSubarraySumMinimized(vector<int> a, int k) {
    // Write Your Code Here
    int low = *max_element(a.begin(),a.end());
    int high = accumulate(a.begin(),a.end(),0);
    while(low<=high){
        int mid = (low+high)/2;
        int subsets = noOfSubsets(a,mid);
        if(subsets>k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}
