void numberCrown(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }


        //spaces
        for(int j=i+1;j<=(2*n)-(2*i);j++){
            cout<<" ";
        }

        //numbers
        for(int j=i;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
