#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        vector<pair<int, int>> v;
        for(auto a: points) {
            v.push_back(make_pair(*a.begin(), *a.rbegin()));
        }
        double denos1 = ((v.begin() + 2)->first - (v.begin())->first);
        double denos2 =  ((v.begin() + 2)->first - (v.begin() + 1)->first);
        if(denos1 != 0 || denos2 != 0) {
            double slope1 = abs((v.begin() + 2)->second - (v.begin())->second) / denos1;
            double slope2 = abs((v.begin() + 2)->second - (v.begin() + 1)->second) / denos2;
            if(slope1 == slope2)
                return false;
        } else return false;
        return true;
    }
};


int main() {
    Solution s;
    vector<vector<int>> v = {{1,1},{1,1},{1,1}};
    cout << s.isBoomerang(v);
    return 0;
}