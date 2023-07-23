int majorityElement(vector<int> v) {
	// Write your code here
	int n=v.size();
	int count=0;
	int ele;
	for(int i=0;i<n;i++){
		if(count==0){
			count=1;
			ele=v[i];
		}
		else if(v[i]==ele)count++;
		else
		count--;
	}
	int count1=0;
	for(int i=0;i<n;i++){
		if(v[i]==ele)
		count1++;
	}
	if(count1>(n/2))
	return ele;
	return -1;
}
