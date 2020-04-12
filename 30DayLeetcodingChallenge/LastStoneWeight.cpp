// class Solution {
// public:
//     void pop_front(std::vector<int>& vec)
//     {
//         assert(!vec.empty());
//         vec.erase(vec.begin());
//     }
    
//     int lastStoneWeight(vector<int>& v) {
//         sort(v.begin(), v.end());
//         reverse(v.begin(), v.end());
//         for(auto i=v.begin(); i!=v.end(); i++) {
//             if(*v.begin() == *(v.begin()+1) && (v.begin()+1) != v.end()) {
//                 pop_front(v);
//                 pop_front(v);
//                 sort(v.begin(), v.end());
//                 reverse(v.begin(), v.end());
//             } else {
//                 if((v.begin()+1) != v.end()) {
//                     int new_element = abs(*v.begin() - *(v.begin()+1));
//                     pop_front(v);
//                     pop_front(v);
//                     v.push_back(new_element);
//                     sort(v.begin(), v.end());
//                     reverse(v.begin(), v.end());
//                 }
//             }
//         }
//         return *v.begin();
//     }
// };


// OMFG
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        vector<int> prev=stones;
        sort(stones.begin(), stones.end(), greater<int>());
        for(int i=0; i<stones.size()-1; i++) {
            stones[i]=stones[i]-stones[i+1];
            stones[i+1]=0;
        }
        if(prev==stones) return *max_element(stones.begin(), stones.end());
        // for(int i : stones) cout << i << " ";
        // cout << endl;
        return lastStoneWeight(stones);
    }
};