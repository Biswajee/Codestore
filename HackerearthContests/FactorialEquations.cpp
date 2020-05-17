#pragma GCC optimize("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#include <math.h>
#define MOD 1000000007
#define ull unsigned long long
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

ull factorial(unsigned int n) { 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
} 

int main() {
    BLACKPINK
    ull n,x;
    cin >> x >> n;
    if(n==0 || n>=7) { cout << 1 << endl; return 0; }
    ull res = (ull)pow(x % 10, factorial(n) % 10) % 10;
    cout << res << endl;
    return 0;
}