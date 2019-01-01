// Approach using c++ stl map -- CHARM !!
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    map<char, int> cnt;
    map<char, int>::iterator it;
    string y; 
    int size, flag=0;
    cin >> size;
    cin >> y;

    if(size == 1) {
        cout << "Yes\n";
        return 0;
    }

    for(char c: y) {
        cnt[c]++;
    }

    // for (it=cnt.begin(); it!=cnt.end(); ++it)
    //     cout << it->first << " => " << it->second << '\n';

    for (it=cnt.begin(); it!=cnt.end(); ++it) {
        if(it->second >= 2) {
            cout << "Yes\n";
            flag=1;
            break;
        }
    }

    if(flag == 0)
    cout << "No\n";

    return 0;
}