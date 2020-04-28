class Solution {
public:
    int dp[1000][1000];
    int maximalSquare(vector<vector<char>>& mat) {
        memset(dp,0,sizeof(dp));
        int maxx = 0;
        int n = mat.size();
        if(n==0) return 0;
        int m = mat[0].size();
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                if(mat[i-1][j-1]=='0') dp[i][j]=0;
                else {
                    dp[i][j]=min(dp[i][j-1], min(dp[i-1][j], dp[i-1][j-1]))+1;
                    if(dp[i][j]>maxx) maxx = dp[i][j];
                }
            }
        }
        
        // for(int i=0; i<n+1; i++) {
        //     for(int j=0; j<n+1; j++) {
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
       return maxx*maxx; 
    }
};