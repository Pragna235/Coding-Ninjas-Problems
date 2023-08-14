#include <bits/stdc++.h> 
int partition(vector<int> &arr, int left, int right){
	int pivot=arr[left];
	int l=left+1;
	int r=right;
	while(l<=r){
		if(arr[l]<pivot && arr[r]>pivot){
			swap(arr[l],arr[r]);
			l++;
			r--;

		}
		if(arr[l]>=pivot){
			l++;
		}
		if(arr[r]<=pivot){
			r--;
		}
	}
	swap(arr[left],arr[r]);
	return r;

}








int kthLargest(vector<int>& arr, int size, int K)
{
	// Write your code here.
	int left=0,right=size-1,kth;
	
	while(1){
		int idx=partition(arr,left,right);
		if(idx==K-1){
			kth=arr[idx];
			break;
		}
		if(idx<K-1){
			left=idx+1;
		}
		else{
			right=idx-1;
		}
	}
	return kth;
}
