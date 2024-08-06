string read(int n, vector<int> book, int target)
{
    // Write your code here.
    //int n = book.size();
    int left=0,right=n-1;
    int sum=0;
    sort(book.begin(),book.end());
    while(left<right){
        sum = book[left]+book[right];
        if(sum == target){
            return "YES";
        }
        else if(sum<target) left++;
        else right--;
    }
    return "NO";


}
