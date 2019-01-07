#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long int n, res;
    cin >> n;

    if(n == 1)
    cout << "1";
    else if (n == 2) 
    cout << "2";
    else {
        if(n%2!=0) {
            cout << n+1;
        }
        else {
            cout << n;
        }
    }


    return 0;
}