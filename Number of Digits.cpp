int countDigits(int n){
	// Write your code here.
	int count=0;
	while(n){
		int rem = n%10;
		count+=1;
		n/=10;
	}	
	return count;
}
