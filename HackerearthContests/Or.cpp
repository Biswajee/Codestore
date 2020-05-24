#pragma GCC optimize("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <unordered_set>
#define MOD 1000000007
#define ll long long
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int main() {
    BLACKPINK
    ll m,n,sum=0;
    cin >> m >> n;
    for(ll i=m; i<=n-1; i++) {
        if(m&1) sum+=3;
        else sum+=1;
    }
    cout << sum << endl;
    return 0;
}



#pragma GCC optimize("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <unordered_set>
#define MOD 1000000007
#define ll long long
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int main() {
    BLACKPINK
    ll m,n,sum=0;
    cin >> m >> n;
    if (m%2!=0) sum+=3;
    else sum+=2;
    sum+=(n-m-1);
    cout << sum << endl;
    return 0;
}