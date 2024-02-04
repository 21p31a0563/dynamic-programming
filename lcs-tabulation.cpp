#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int fun(int m, int n, string &s1, string &s2) {

for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        if(s1[i-1]==s2[j-1]){
            dp[i][j]=1+dp[i-1][j-1];
        }
        else{
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
}
return dp[m][n];
}
int main() {
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int m = s1.length();
    int n = s2.length();
    memset(dp, 0, sizeof(dp)); // Initialize to 0 instead of -1 for bottom-up DP
    cout << fun(m, n, s1, s2) << endl;

    return 0;
}
