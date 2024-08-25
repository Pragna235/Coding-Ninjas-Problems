int sumOfD(vector<int> &arr, int div){
	int n = arr.size();
	long long ans =0;
	for(int i=0;i<n;i++){
		ans += ceil((double)arr[i] / (double)div);
	}
	return ans;
}

int smallestDivisor(vector<int>& arr, int limit)
{
	// Write your code here.
	int n = arr.size();
	if(n>limit) return -1;

	int low = 1, high = *max_element(arr.begin(),arr.end());
	while(low<=high){
		int mid = ( low+high)/2;
		if(sumOfD(arr,mid) <= limit){
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	return low;
}
