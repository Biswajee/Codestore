#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#define BLACKPINK ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    BLACKPINK
    long long int t,n,x;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<long long int> arr(n);
        vector<long long int> v;
        for(int i=0; i<n; i++) { cin >> x; arr.push_back(x); }

        int msum = 0;
        vector<long long int>::iterator it = arr.begin();
        while(true) {
            it = max_element(arr.begin(), arr.end());
            // cout << arr.size() << endl;
            if(arr.size() != 0) {
                v.push_back(*it);
                msum = msum + *it;
                arr.erase(it-1, it+1);
            }
            else {
                // reverse(v.begin(), v.end());
                for(auto i=v.rbegin(); i!=v.rend(); ++i) {
                    if(*i != 0)
                        cout << *i;
                }
                cout << endl;
                break;
            }
        }
        v.clear();
        arr.clear();
        // cout << msum << endl;
    }
    return 0;
}