void alphaHill(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=(n-i);j++){
            cout<<"  ";
        }

        //alphabets
        char ch='A';
        int breakpoint = (2*i-1) / 2;
        for(int j=1;j<=(2*i)-1;j++){
            
            
            
            cout<<ch<<" ";
            if(j<=breakpoint) ch++;
            else ch--;
        }
        cout<<endl;



        
    }
    
}
