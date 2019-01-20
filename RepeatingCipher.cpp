#include <iostream>
#include <algorithm>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int main() {
    BLACKPINK

    int n;
    string s;
    cin >> n >> s;
    if(n == 1) {
        cout << s;
        return 0;
    }
    int sum = 0;
    for(int i=0; i < n; i++) {
        // cout << i << " ";
        sum = sum + i;
        if(sum < n)
            cout << s[sum];
    }
    return 0;
}