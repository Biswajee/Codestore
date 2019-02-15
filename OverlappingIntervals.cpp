/*
Given a collection of Intervals,merge all the overlapping Intervals.
For example:

Given [1,3], [2,6], [8,10], [15,18],

return [1,6], [8,10], [15,18].

Make sure the returned intervals are sorted.
*/

#include <bits/stdc++.h>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int t,n,x,y;
    cin >> t;
    while(t--) {
        set<pair<int, int>> A, B;
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> x >> y;
            A.insert(make_pair(x,y));
        }
        // sort(A.begin() ,A.end());

        for(auto c : A) {
            for(auto d : A) {
                if((d.first > c.first) && (d.second < c.second)) {
                    B.insert(make_pair(c.first, c.second));
                }
                else if((d.first < c.first) && (d.second < c.second)) {
                    B.insert(make_pair(d.first, c.second));
                }
                else if((d.first > c.first) && (d.second > c.second)) {
                    B.insert(make_pair(c.first, d.second));
                }
                else if((d.first < c.first) && (d.second > c.second)) {
                    B.insert(make_pair(d.first, d.second));
                }
            }
        }
    }
    return 0;
}