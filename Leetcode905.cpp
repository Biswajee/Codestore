// Slow
// class Solution {
// public:
//     vector<int> sortArrayByParity(vector<int>& A) {
//         vector<int> res;
//         map<int, int> mp;
//         for(int i=0; i<A.size(); i++) {
//             if(A[i]%2==0) {
//                 res.push_back(A[i]);
//                 mp[A[i]]++;
//             }
//         }
//         for(int i=0; i<A.size(); i++) {
//             if(!mp[A[i]]) res.push_back(A[i]);
//         }
//         return res;
//     }
// };

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> v(A.size());
        int l=0,i=0;
        int r= A.size()-1;
        
        while(l<=r && i<A.size())
        {
            if(A[i]%2==0)
                v[l++]=A[i++];
            else
                v[r--]=A[i++];
        }
        return v;
    }
};