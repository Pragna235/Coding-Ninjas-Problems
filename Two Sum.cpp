#include<algorithm>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	// Write your code here. 
	vector<pair<int,int>> ans;
	sort(arr.begin(),arr.end());
	int start=0,end=n-1;
	while(start<end)
	{
        if(arr[start]+arr[end]==target){
			pair<int,int> p(arr[start],arr[end]);
			ans.push_back(p);
			start++;
			end--;
		}
		else if(arr[start]+arr[end]<target){
			start++;
		}
		else{
			end--;
		}
	}
	if(ans.size()==0)
	{
		pair<int,int> p(-1,-1);
		ans.push_back(p);
		return ans;
	}
	return ans;
}
