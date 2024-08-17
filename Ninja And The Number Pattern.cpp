void getNumberPattern(int n) {
    // Write your code here.
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i,left=j,right=(2*n-1)-1-j,bottom=(2*n-1)-1-i;
            cout<<(n-min(min(top,bottom),min(left,right)));
        }
        cout<<endl;
    }
}
