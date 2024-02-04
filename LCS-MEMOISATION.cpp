#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
    int fun(int m,int n,string &s1,string &s2){
        if(m==0 || n==0){
            return 0;
            
        }
        if(dp[m][n]!=-1)return dp[m][n];
        if(s1[m-1]==s2[n-1]){
            dp[m][n]= 1+fun(m-1,n-1,s1,s2);
            
        }
        else{
            dp[m][n]=max((fun(m,n-1,s1,s2)),fun(m-1,n,s1,s2));
        }
        return dp[m][n];
    }
    
  int main(){
        // your code here
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        int m,n;
        m=s1.length();
        n=s2.length();
        memset(dp,-1,sizeof(dp));
        cout<<fun(m,n,s1,s2)<<endl;
    
        
    }
