int noOfStudents(vector<int> arr, int pages){
    long long pagesStu=0;
    int students=1;
    for(int i=0;i<arr.size();i++){
        if(pagesStu + arr[i] <= pages){
            pagesStu+=arr[i];
        }
        else{
            students++;
            pagesStu=arr[i];
        }
    }
    return students;
}

int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(m>n) return -1;
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        int mid = (low+high)/2;
        int students = noOfStudents(arr,mid);
        if(students>m){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}
