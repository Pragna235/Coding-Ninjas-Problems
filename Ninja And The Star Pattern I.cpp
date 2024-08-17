void getStarPattern(int n) {
    // Write your code here.
    if(n==1) cout<<"*";
    else{
        for(int i=0;i<n;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=n-2;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    }
    
}
