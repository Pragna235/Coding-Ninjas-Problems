#include <bits/stdc++.h> 
void rearrangeArray(int arr[], int n)
{
	// Write your code here
	for(int i=0;i<n;i++){
		arr[i]+=(arr[arr[i]] % n) * n;
	}
	for(int i=0;i<n;i++){
		arr[i]/=n;
	}
}
