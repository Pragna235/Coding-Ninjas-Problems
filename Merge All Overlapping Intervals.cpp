#include<vector>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	// Write your code here.
	int n = arr.size();
	vector<vector<int>> ans;
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++){
		if(ans.empty() || arr[i][0] > ans.back()[1]){
			ans.push_back(arr[i]);
		}
		else{
			ans.back()[1] = max(ans.back()[1], arr[i][1]);
		}
	}
	return ans;
	
}
