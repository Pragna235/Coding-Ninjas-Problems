void reverseArray(vector<int> &arr , int m) {
    // Write your code here   
    int n = arr.size();
    int start = m+1;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++,end--;
    }    	
}
