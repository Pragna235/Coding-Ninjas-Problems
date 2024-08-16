#include <bits/stdc++.h> 
vector<long long int> kthRow(int row) 
{
	// Write your code here.
	long long int ans = 1;
	vector<long long int> ansRow;
	ansRow.push_back(1);
	for(int col=1;col<row;col++){
		ans = ans * (row-col);
		ans = ans / col;
		ansRow.push_back(ans);
	}
	return ansRow;
} 
