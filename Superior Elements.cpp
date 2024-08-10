vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    int maxi = INT_MIN;
    int n = a.size();
    vector<int> ele;
    for(int i=n-1;i>=0;i--){
        if(a[i]>maxi){
            ele.push_back(a[i]);
        }
        maxi = max(maxi, a[i]);
    }
    return ele;
}
