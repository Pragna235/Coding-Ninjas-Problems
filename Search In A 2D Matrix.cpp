bool searchMatrix(vector<vector<int>>& mat, int target) {
    int row=mat.size();
    int col = mat[0].size();
    int low=0;
    if(!row) return false;

    int high = (row*col)-1;
    while(low<=high){
        int mid = (low + (high-low)/2);

        if(mat[mid/col][mid%col]==target)
        return true;
        if(mat[mid/col][mid%col]<target)
        low=mid+1;
        else
        high=mid-1;
    }
    return false;
        
}
