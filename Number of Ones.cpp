#include <bits/stdc++.h> 
int countOnBits(int n) {
	// Write your code here. 
	int count=0;
	while(n){
		count+=n&1;
		n=n>>1;
	}     
	return count;
}
