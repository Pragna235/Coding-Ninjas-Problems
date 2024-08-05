int secondLargest(vector<int> a, int n){
    int large = a[0];
    int slarge = -1;

    for(int i=1;i<n;i++){
        if(a[i]>large){
            slarge = large;
            large = a[i];
        }
        else if(a[i]>slarge){
            slarge = a[i];
        }
    }
    return slarge;
}

int secondSmallest(vector<int> a, int n){
    int small = a[0];
    int ssmall= INT_MAX;

    for(int i=1;i<n;i++){
        if(a[i]<small){
            ssmall = small;
            small = a[i];
        }
        else if(a[i]<ssmall){
            ssmall = a[i];
        }
    }
    return ssmall;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int slargest = secondLargest(a, n);
    int ssmallest = secondSmallest( a,  n);

    return {slargest, ssmallest};
}
