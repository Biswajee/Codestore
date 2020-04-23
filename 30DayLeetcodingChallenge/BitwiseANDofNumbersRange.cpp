// class Solution {
// public:
//     int rangeBitwiseAnd(int m, int n) {
//         if(m==0) return 0;
//         int i=m+1, j=n;
//         while(i<=n && j>=m && i<=j) {
//             m=m&i&j;
//             i++;
//             j--;
//         }
//         return m;
//     }
// };


class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        while(m<n) {
            n-=(n&-n);
        }
        return n;
    }
};
