/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &b) {
        vector<int> dim = b.dimensions();
        int minIdx = INT_MAX;
        for(int i=0; i<dim[0]; i++) {
            int l=0, r=dim[1]-1, mid;
            while(l<=r) {
                mid = (l+r)/2;
                if(b.get(i,mid)==1) {
                    r = mid-1;
                    minIdx = min(minIdx, mid);
                }
                else l = mid+1;
            }
        }
        if(minIdx == INT_MAX) return -1;
        return minIdx;
    }
};




/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

// class Solution {
// public:
//     int leftMostColumnWithOne(BinaryMatrix &bin) {
//         vector<int> dim = bin.dimensions();
//         int minIdx=dim[1], idx, i, j;
//         for(i=0; i<dim[0]; i++) {
//             for(j=0; j<minIdx; j++) {
//                 if(bin.get(i,j)==1) break;
//             }
//             cout << j << " ";
//             minIdx = min(minIdx,j);
//         }
//         return minIdx;
//     }
// };