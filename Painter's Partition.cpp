#include<numeric>
int noOfPainters(vector<int> &boards, int units){
    int unitsPerPainter = 0;
    int painters=1;
    for(int i=0;i<boards.size();i++){
        if(unitsPerPainter + boards[i] <= units){
            unitsPerPainter += boards[i];
        }
        else{
            painters++;
            unitsPerPainter = boards[i];
        }
    }
    return painters;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int n = boards.size();
    int low = *max_element(boards.begin(),boards.end());
    int high = accumulate(boards.begin(),boards.end(),0);
    while(low<=high){
        int mid = (low+high)/2;
        int painters = noOfPainters(boards,mid);
        if(painters>k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}
