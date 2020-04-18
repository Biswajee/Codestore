#include <bits\stdc++.h>
using namespace std;

// class Solution {
// public:
//     int minPathSum(vector<vector<int>>& grid) {
//         int cost = 0;
        
//         if(grid.size()==1 && grid[0].size()==1) return grid[0][0];
        
//         else if(grid.size()==1) {
//             for(int i=0; i<grid[0].size(); i++) {
//                 cost+=grid[0][i];
//             }
//             return cost;
//         }
        
//         vector<int> temp;
//         for(int i=0 ; i<grid[0].size(); i++) temp.push_back(0);
//         grid.push_back(temp);
        
//         vector<vector<int>> seed;
//         for(auto x : grid) {
//             temp.clear();
//             for(int k : x) temp.push_back(k);
//             temp.push_back(0);
//             seed.push_back(temp);
//         }
        
//         // printing...
//         for(int i=0; i<seed.size(); i++) {
//             for(int j=0; j<seed[0].size(); j++) 
//                 cout << seed[i][j] << " ";
//             cout << endl;
//         }
        
//         for(int i=0; i<seed.size()-1; i++) {
//             for(int j=0; j<seed[0].size()-1; j++) {
//                 cost+=min(seed[i+1][j], seed[i][j+1]);
//             }
//         }
//         return cost;
//     }
// };

// NAIVE...
// class Solution {
// public:
//     int mincost(vector<vector<int>> cost, int m, int n) { 
//        if (n < 0 || m < 0) 
//           return INT_MAX; 
//        else if (m == 0 && n == 0) 
//           return cost[m][n]; 
//        else
//           return cost[m][n] + min(mincost(cost, m-1, n), mincost(cost, m, n-1)); 
// }
    
//     int minPathSum(vector<vector<int>>& grid) {
//         int res = mincost(grid, grid.size()-1, grid[0].size()-1);
//         return res;
//     }
// };


// DP...Accepted
class Solution {
public:
    int mincost(vector<vector<int>> v) { 
        int dp[v.size()][v[0].size()];
        dp[0][0] = v[0][0];
        int i,j;
        for (i = 1; i <= v.size()-1; i++) 
            dp[i][0] = dp[i-1][0] + v[i][0];
        
        for (j = 1; j <= v[0].size()-1; j++) 
            dp[0][j] = dp[0][j-1] + v[0][j];
        
        for (i = 1; i <= v.size()-1; i++) {
            for (j = 1; j <= v[0].size()-1; j++) {
                dp[i][j] = v[i][j] + min(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[v.size()-1][v[0].size()-1]; 
}
    
    int minPathSum(vector<vector<int>>& grid) {
        int res = mincost(grid);
        return res;
    }
};


int main() {
    Solution sol;
    sol.minPathSum()
    return 0;
}