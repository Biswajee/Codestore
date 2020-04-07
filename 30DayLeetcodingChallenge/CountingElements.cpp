#include <algorithm>
class Solution {
public:
    int countElements(vector<int>& arr) {
        int count=0;
        sort(arr.begin(), arr.end());
        for(int x :arr) {
            if(binary_search(arr.begin(), arr.end(), x+1)) count++;
        }
        return count;
    }
};