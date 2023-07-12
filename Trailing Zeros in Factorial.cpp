int trailingZerosInFactorial(int n)
{
	// Write your code here.
	int count=0;
	while(n>0){
		count+=n/5;
		n/=5;
	}
	return count;
}
