#include <iostream>
#define ll long long

using namespace std;
int main() {
    ll t,a,b;
    cin >> t;
    while(t--) {
        cin >> a >> b;
         if(a%b == 0)cout << a % b << endl;
         else cout << b - (a%b) << endl;
    }
    return 0;
}