class Solution {
public:
    int longestCommonSubsequence(string x, string y) {
        int dp[x.length()+1][y.length()+1];
        int maxm = INT_MIN;
        
        memset(dp,0,sizeof(dp));
        
        for(int i=1; i<=x.length(); i++) {
            for(int j=1; j<=y.length(); j++) {
                if(x[i-1]==y[j-1]) dp[i][j] = dp[i-1][j-1]+1;
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                if(dp[i][j]>maxm) maxm = dp[i][j];
            }
        }
        return maxm;
    }
};
