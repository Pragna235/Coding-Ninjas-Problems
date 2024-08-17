void symmetry(int n) {
    // Write your code here.
    int spaces = 0;
    for(int i=0;i<n;i++){
        //stars
        for(int j=1;j<=(n-i);j++){
            cout<<"* ";
        }
        //spaces
        for(int j=0;j<spaces;j++){
            cout<<"  ";
        }

        //stars
        for(int j=1;j<=(n-i);j++){
            cout<<"* ";
        }
        spaces+=2;
        cout<<endl;
        


    }

    spaces = 2*(n-1);
    for(int i=0;i<n;i++){

        //stars
        for(int j=1;j<=i+1;j++){
            cout<<"* ";
        }
        //spaces
        for(int j=spaces;j>=0;j--){
            cout<<"  ";
        }

        //stars
        for(int j=1;j<=i+1;j++){
            cout<<"* ";
        }
        cout<<endl;

    }
}
