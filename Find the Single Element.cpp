#include<vector>
#include<bits/stdc++.h>
int getSingleElement(vector<int> &arr){
	// Write your code here.
	int n = arr.size();
	int xorr=0;
	for(int i=0;i<n;i++){
		xorr = xorr ^ arr[i];
	}	
	return xorr;
}
