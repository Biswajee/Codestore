#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,count;
    string y;
    cin >> t;
    while(t--) {
        count = 0;
        cin >> y;
        for(int i=0; i < y.length(); i++) {
            if(y[i] == 'A' || y[i] == 'D' || (y[i] >= 'O' && y[i] <= 'R'))
                count++;
            else if(y[i] == 'B')
                count+=2;
        }
        cout << count << endl;

    }
    
    return 0;
}