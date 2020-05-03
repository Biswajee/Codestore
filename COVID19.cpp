#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <set>
using namespace std;
int main() {
    int t,n,x;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int> v(n);
        set<int> st;
        for(int i=0; i<n; i++) cin >> v[i];
        int cluster=1; // first element...
        for(int i=1; i<n; i++) {
           if((v[i]-v[i-1])<=2) cluster++;
           if((v[i]-v[i-1])>2) {
               st.insert(cluster);
               cluster=1;
           }
        }
        st.insert(cluster);
        cout << *min_element(st.begin(), st.end()) << " " << *max_element(st.begin(), st.end());
    }
    return 0;
}
