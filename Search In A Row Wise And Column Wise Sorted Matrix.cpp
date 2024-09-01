#include <bits/stdc++.h> 
pair<int, int> search(vector<vector<int>> matrix, int x)
{
    // Write your code here.
    int n = matrix.size();
    int m = matrix[0].size();
    int row=0,col=m-1;

    while(row<n && col>=0){
        if(matrix[row][col] == x) return {row,col};
        else if(matrix[row][col] < x) row++;
        else col--;
    }
    return {-1,-1};
}
