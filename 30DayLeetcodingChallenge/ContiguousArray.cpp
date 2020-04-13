// class Solution {
// public:
//     void cluster(vector<int> zero, vector<int> one) {
//         cout << "Zero: ";
//         for(int x : zero) cout << x << " ";
//         cout << endl << "One: ";
//         for(int x : one) cout << x << " ";
//         cout << endl;
//     }
    
//     int findMaxLength(vector<int>& nums) {
//         if(*nums.rbegin() == 1) nums.push_back(0); // pad 0
//         else nums.push_back(1); // pad 1
//         vector<int> zero, one;
//         int count0=0, count1=0;
//         for(int i=0; i<nums.size()-1; i++) {
//             if(nums[i]==0) count0++;
//             if(nums[i]==1) count1++;
//             if(nums[i]==1 && nums[i]!=nums[i+1]) {
//                 one.push_back(count1);
//                 count1=0;
//             }
//             if(nums[i]==0 && nums[i]!=nums[i+1]) {
//                 zero.push_back(count0);
//                 count0=0;
//             }
//         }
//         //print clusters
//         cluster(zero, one);
        
//         sort(zero.begin(), zero.end(), greater<int>());
//         sort(one.begin(), one.end(), greater<int>());
        
//         for(int i=0; i<zero.size(); i++) {
//             for(int j=0; j<one.size(); j++) {
//                 if(zero[i]==one[j])
//                     return zero[i]*2;
//             }
//         }
//         return min(*min_element(zero.begin(),zero.end()), *min_element(one.begin(), one.end()))*2;
//     }
// };




