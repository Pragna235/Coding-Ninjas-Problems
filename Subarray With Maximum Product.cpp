#include<vector>
#include<bits/stdc++.h>

int subarrayWithMaxProduct(vector<int> &arr){
	// Write your code here.
	int n = arr.size();
	int pre = 1, suf=1;
	int maxi=INT_MIN;

	for(int i=0;i<n;i++){
		if(pre==0) pre=1;
		if(suf==0) suf=1;

		pre *= arr[i];
		suf *= arr[n-i-1];
		maxi = max(maxi, max(pre,suf));
	}
	return maxi;
}
