vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    
    int j=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }

    if(j==-1) return a;

    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }

    return a;


}
