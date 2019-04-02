#include <bits/stdc++.h>
#include <tuple>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, q, id;
        cin >> n >> q;
        unordered_map<int, map<int, pair<string, char>>> ump;
        map<int, pair<string, char>> temp; 
        // Team data...
        string str; char lead;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=3; j++) {
                cin >> id >> str >> lead;
                temp[j] = make_pair(str, lead);
                ump[i] = temp;
            }
        }
        map<int, map<int, string>> res;
        map<int, string> temp2;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=3; j++) {
                temp = ump[i];
                if(temp[j].second == 'Y') {
                    temp2[1] = temp[j].first;
                }
                else {
                    if(temp[j].first > temp[j+1].first) {
                        temp2[2] = temp[j].first;
                    } else {
                        temp2[3] = temp[j+1].first;
                    }
                }
                res[i] = temp2;
                if(j == 3) break;
            }
        }
        int x,y;
        for(int i=0; i<q; i++) {
            cin >> x >> y;
            temp2 = res[x];
            cout << temp2[y] << endl; 
        }
    }
    return 0;
}