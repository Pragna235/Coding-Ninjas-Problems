int days(vector<int> &weights, int cap){
    int day=1,load=0;
    int n = weights.size();
    for(int i=0;i<n;i++){
        if(load + weights[i] > cap){
            day+=1;
            load=weights[i];
        }
        else{
            load+=weights[i];
        }
    }
    return day;
}

int leastWeightCapacity(vector<int> &weights, int d)
{
    // Write your code here.
    int n = weights.size();
    int low = *max_element(weights.begin(),weights.end());
    int high = accumulate(weights.begin(),weights.end(),0);

    while(low<=high){
        int mid = (low+high)/2;
        if(days(weights,mid) <= d){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}
