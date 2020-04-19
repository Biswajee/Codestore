#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    int elem = *max_element(v.begin(), v.end());
    int count=0;
    for(auto i=v.begin(); i!=v.end(); i++) {
        if(*i==elem) count++;
        if(count==3) {
            v.erase(i);
            break;
        }
    }
    if(count==1) v.erase(max_element(v.begin(), v.end()));
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}