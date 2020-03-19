// Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num 
// Calculate the number of 1's in their binary representation and return them as an array.

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> v;
        for(int i=0; i<=num; i++) {
            v.push_back(__builtin_popcount(i));
        }
        return v;
    }
};