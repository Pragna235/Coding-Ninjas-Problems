#include <bits/stdc++.h> 
using namespace std;

struct item{
    int profit;
    int weight;
};

bool static compare(item a,item b){
    double r1 = (double)a.profit / (double)a.weight;
    double r2 = (double)b.profit / (double)b.weight;
    return r1>r2;
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    struct item items2[n];
    for(int i=0;i<n;i++){
        items2[i].profit = items[i].second;
        items2[i].weight = items[i].first;
    }

    sort(items2,items2+n,compare);

    double curweight=0;
    double jobprofit=0;

    for(int i=0;i<n;i++){
        if(curweight + items2[i].weight <= w){
            curweight+=items2[i].weight;
            jobprofit+=items2[i].profit;
        }
        else{
            double remain = w-curweight;
            jobprofit+=(items2[i].profit / (double)items2[i].weight)*(double)remain;
            break;
        }
    }

    return jobprofit;

    

}
