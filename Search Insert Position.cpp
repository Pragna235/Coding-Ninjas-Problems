int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	int n = arr.size();
	int ans=n;
	int low=0,high=n-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]>=m){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}
