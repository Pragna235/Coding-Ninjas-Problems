int findMin(vector<int>& arr)
{
	// Write your code here.
	int n = arr.size();
	int low=0,high=n-1;
	int ans = INT_MAX;
	while(low<=high){
		int mid = (low+high)/2;

		if(arr[low]<=arr[high]){
			ans = min(ans,arr[low]);
			return ans;
		}

		if(arr[low]<=arr[mid]){
			ans = min(ans,arr[low]);
			low=mid+1;
		}
		else{
			ans = min(ans,arr[mid]);
			high=mid-1;
		}
	}
}
