int missingK(vector < int > vec, int n, int k) {
    // Write your code here.
    int low=0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        int missing = vec[mid] - (mid+1);
        if(missing<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low+k;
}
