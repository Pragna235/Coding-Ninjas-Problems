vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here
    int n= a.size();
    long long SN = (n*(n+1))/2;
    long long S2N = (n*(n+1)*(2*n+1))/6;
    long long S=0,S2=0;
    for(int i=0;i<n;i++){
        S+=(long long)a[i];
        S2+=(long long)a[i] * (long long)a[i];
    }
    long long val1 = S-SN;
    long long val2 = S2-S2N;
    val2 = val2/val1;

    long long X = (val2+val1)/2;
    long long Y = X-val1;
    return {(int)X,(int)Y};

    
}
