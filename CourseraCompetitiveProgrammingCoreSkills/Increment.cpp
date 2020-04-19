#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int count=0;
    for(char a : s) {
        if(a == '9') count++; 
    }
    if(count==s.length()) cout << s.length()+1 << endl;
    else cout << s.length() << endl;
    return 0;
}