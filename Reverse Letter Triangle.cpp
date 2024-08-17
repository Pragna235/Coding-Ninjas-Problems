void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(char ch = 'A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
