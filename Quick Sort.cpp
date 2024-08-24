#include <bits/stdc++.h> 
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i=low,j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;

}

void qs(vector<int> &arr,int low,int high)
    {
        if(low<high)
        {
            int pivot = partition(arr,low, high);
            qs(arr,low,pivot-1);
            qs(arr,pivot+1,high);
        }
    }

vector<int> quickSort(vector<int> &arr)
{
    // Write your code here.
    int n=arr.size();
    qs(arr,0,n-1);
    return arr;
    
   
}

