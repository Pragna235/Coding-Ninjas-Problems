int isSorted(int n, vector<int> a) {
    // Write your code here.
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1]){

        }
        else{
            return false;
        }
    }
    return true;

}
