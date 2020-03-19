// Write a function that takes an unsigned integer and return the number of '1' bits it has (also known as 
// the Hamming weight).


class Solution {
public:
    int hammingWeight(uint32_t n) {
        return __builtin_popcount(n);
    }
};