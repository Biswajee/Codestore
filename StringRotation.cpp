#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <algorithm>
#include <math.h>
using namespace std;
int main() {
    int q, mag = 0, magnitude, flag = 0;
    char dir, point;
    string x;
    vector<char> v;
    set<char> s;
    cin >> x >> q;

    for(int i=0; i<x.length(); i++) {
        s.insert(x[i]);
    }

    for(int i=0; i<q; i++) {
        cin >> dir >> magnitude;
        if(dir == 'L') {
            mag = mag + magnitude;
            point = x[mag];
            v.push_back(point);
        }
        if(dir == 'R') {
            mag = mag - magnitude;
            if(mag < 0) {
                mag = x.length() + mag;
            }
            point = x[mag];
            v.push_back(point);
        }
    }
    sort(v.begin(), v.end());
    vector<char>::iterator iv;
    set<char>::iterator is;
    for(iv = v.begin(), is = s.begin(); is!=s.end() && iv!=v.end(); iv++, is++) {
        if(*iv != *is) {
            cout << "NO" << endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0 && s.size() == v.size()) {
        cout << "YES" << endl;
    } else if(flag == 0){
        cout << "NO" << endl;
    }
    // cout << s.size() << " " << v.size() << endl;
    return 0;
}