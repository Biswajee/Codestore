class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
        vector<int> skylineV;
        vector<int> skylineH;
        
        skylineV.resize(grid.size());
        skylineH.resize(grid[0].size());
        
        for (size_t y = 0; y < grid.size(); ++y)
        {
            for (size_t x = 0; x < grid[y].size(); ++x)
            {
                skylineV[y] = max(skylineV[y], grid[y][x]);
                skylineH[x] = max(skylineH[x], grid[y][x]);
            }
        }
        
        int sum = 0, maxHeight = 0;

        for (size_t y = 0; y < grid.size(); ++y)
        {
            for (size_t x = 0; x < grid[y].size(); ++x)
            {
                 maxHeight = min(skylineH[x], skylineV[y]);
                
                if (grid[y][x] < maxHeight) sum += maxHeight - grid[y][x];
            }
        }

        return sum;
    }
};