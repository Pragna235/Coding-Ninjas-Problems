int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    if(n==0) return 0;

    int count=0;
    int lastSmaller=INT_MIN;
    int longest=1;

    unordered_set<int>s;

    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }

    for(auto it:s){
        if(s.find(it-1) == s.end()){
            count=1;
            lastSmaller = it;
            while(s.find(lastSmaller+1)!=s.end()){
                count++;
                lastSmaller++;
            }
        }
        longest = max(longest,count);
    }
    return longest;
}
