class Solution{
public:
    int dp[10001];

    int fun(int price[], int n) {
        if (n == 0) return 0;
        if (dp[n] != -1) {
            return dp[n];
        }

        int maxe = INT_MIN;
        for (int i = 0; i < n; i++) {
            int len = i + 1;
            maxe = max(maxe, price[i] + fun(price, n - len));
        }

        return dp[n] = maxe; // Update dp[n] with the correct value
    }

    int cutRod(int price[], int n) {
        // code here
        memset(dp, -1, sizeof(dp));
        return fun(price, n);
    }
};
