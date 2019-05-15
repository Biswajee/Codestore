# include <bits/stdc++.h>
# include <algorithm>
# include <string.h>
# include <iostream>
# define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0;
        for(auto x: J) {
            for(auto y: S) 
                if(y == x) count++;
        }
        return count;
    }
};

int main() {
    Solution s;
    string jewel, stone;
    cin >> jewel >> stone;
    cout << s.numJewelsInStones(jewel, stone) << endl;
    return 0;
}