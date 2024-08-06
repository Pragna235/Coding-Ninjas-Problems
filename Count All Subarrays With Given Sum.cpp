int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    int n = arr.size();
    int sum=0;
    map<int,int> preSumMap;
    int count=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum == k){
            count++;
        }

        int rem = sum-k;

        if(preSumMap.find(rem) != preSumMap.end()){
            count++;
        }

        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum]=i;
        }
    }
    return count;
}
