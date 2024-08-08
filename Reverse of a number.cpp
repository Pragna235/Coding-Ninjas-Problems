#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int rev=0;
	int n;
	cin>>n;
	while(n>0){
		int rem = n%10;
		rev = (rev*10)+rem;
		n/=10;
		
	}
	cout<<rev<<endl;
	return 0;
	
}
