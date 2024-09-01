int maxIndex(vector<vector<int>> &g, int n, int m,int col){
    int maxi = -1;
    int ind = -1;
    for(int i=0;i<n;i++){
        if(g[i][col] > maxi){
            maxi=g[i][col];
            ind = i;
        }
    }
    return ind;
}
vector<int> findPeakGrid(vector<vector<int>> &g){
    // Write your code here.    
    int n = g.size();
    int m = g[0].size();
    int low=0,high=m-1;
    while(low<=high){
        int mid = (low+high)/2;
        int rowIndex = maxIndex(g,n,m,mid);
        int left = mid-1>=0? g[rowIndex][mid-1] : -1;
        int right = mid+1<m? g[rowIndex][mid+1] : -1;

        if(g[rowIndex][mid] > left && g[rowIndex][mid] > right){
            return {rowIndex,mid};
        }
        else if(g[rowIndex][mid] < left){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return {-1,-1};
}
