#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	int ans=1;
	for(int i=0;i<n;i++){
		ans=(1LL*ans*x)%m;
	}
	return ans;
	
}
