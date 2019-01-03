#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a; long b; char c; float d; double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << "\n" << b << "\n" << c << "\n";
    cout.setf(ios::fixed);
    cout << d << "\n";
    cout << setprecision(9) << e << "\n";
    return 0;
}