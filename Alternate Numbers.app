vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    int pos=0,neg=1;
    int n = a.size();
    vector<int> ans(n,0);
    for(int i=0;i<n;i++){
        if(a[i]>0){
            ans[pos]=a[i];
            pos+=2;
        }
        else{
            ans[neg]=a[i];
            neg+=2;
        }
    }
    return ans;
}
