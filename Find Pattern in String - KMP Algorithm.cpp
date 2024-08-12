#include <bits/stdc++.h> 

void computeLPSArray(string &p, int m, vector<int> &lps){
    int len=0;
    lps[0]=0;
    int i=1;
    while(i<m){
        if(p[i]==p[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len!=0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
    
}

bool findPattern(string p, string s)
{
    // Write your code here.
    int n = s.size();
    int m = p.size();

    vector<int>lps(m,0);
    computeLPSArray(p,m,lps);

    int i=0,j=0;

    while((n-i)>=(m-j)){
        if(s[i]==p[j]){
            i++;j++;
        }
        if(j==m){
            return true;
        }
        else if(i<n && s[i]!=p[j]){
            if(j!=0){
                j=lps[j-1];
            }
            else{
                i++;
            }
        }
    }
    return false;
}
