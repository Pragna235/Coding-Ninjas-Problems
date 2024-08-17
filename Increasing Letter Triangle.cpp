void nLetterTriangle(int n) {
    // Write your code here.
    char ch = 'A';
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
