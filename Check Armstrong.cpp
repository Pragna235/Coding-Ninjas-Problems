bool checkArmstrong(int n){
	//Write your code here
	int dup=n,  sum=0;

	while(n){
		int rem = n%10;
		sum+=(rem*rem*rem);
		n/=10;
	}
	if(sum==dup) return true;
	return false;
}
