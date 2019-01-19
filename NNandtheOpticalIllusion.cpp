#include <bits/stdc++.h>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI 3.14159265359

using namespace std;

int main() {
    BLACKPINK
    double n,r,alpha,R;
    cin >> n >> r;

    alpha = PI * ((double)(n-2)/n); 
    R = r * ((double)cos(alpha/2)/(1 - cos(alpha/2)));
    cout << fixed << setprecision(10) << R << endl;
    return 0;
}