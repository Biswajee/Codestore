#include <bits\stdc++.h>
#include <algorithm>
#include <vector>

using namespace std;
// Flood fill algorithm...
class Solution {
public:
    bool visited[1000][1000];
    void dfs(vector<vector<char>> &g, int i, int j) {
        if(i<0 || i>g.size()-1 || j<0 || j>g[0].size()-1 || g[i][j]=='0' || g[i][j]=='F')
            return;
        g[i][j]='F';
        dfs(g, i+1, j);
        dfs(g, i-1, j);
        dfs(g, i, j+1);
        dfs(g, i, j-1);
    }
    


    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[i].size(); j++) {
                if(grid[i][j]!='0' && grid[i][j]!='F') {
                    dfs(grid, i, j);
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    vector<vector<char>> v = {{1,1,1,1,0},{1,1,0,1,0},{1,1,0,0,0},{0,0,0,0,0}};
    int r = sol.numIslands(v);
    cout << r << endl;
    return 0;
}