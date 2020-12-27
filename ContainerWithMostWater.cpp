#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int t,n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int arr[n];
	    for(int i=0; i<n; i++) cin >> arr[i];
	    
        // O(n^2) approach...
	    vector<int> res;
	    for(int i=0; i<n; i++) {
	        for(int j=0; j<n; j++) {
	           res.push_back(min(arr[i], arr[j]) * abs(i-j)); 
	        }
	    }
	    cout << *max_element(res.begin(), res.end()) << endl;
	}
	return 0;
}


// O(n)
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1;
        int mx=0;
        while(i<j) {
            int mn = min(height[i], height[j]);
            int area = mn * abs(j-i);
            mx = max(mx, area);
            if(mn == height[i]) i++;
            if(mn == height[j]) j--;
        }
        return mx;
    }
};

// O(n^2)
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int mx = 0;
//         for(int i=0; i<height.size(); i++) {
//             for(int j=i; j<height.size(); j++) {
//                 int area = min(height[i], height[j]) * abs(j-i);
//                 mx = max(mx, area);
//             }
//         }
//         return mx;
//     }
// };