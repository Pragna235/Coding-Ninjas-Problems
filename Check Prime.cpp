#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int count=0;

	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			count++;
			if((n/i)!=i){
				count++;
			}
		}
	}
	if(count==2) cout<<"true"<<endl;
	else cout<<"false"<<endl;
	return 0;
	
}
