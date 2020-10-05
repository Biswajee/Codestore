#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long

using namespace std;
int main() {
    ll t,n,k,a_no,iter;
    cin >> t;
    while(t--) {
        // vector<string> v;
        // cin >> n >> k;
        // iter=k;
        // a_no = n-2;
        // string str="";
        // for(int i=0; i<n-2; i++)
        //     str.append("a");
        // str+="bb";
        // do {
        //     v.push_back(str);
        //     if(k==0) break;
        //     k--;
        // } while(next_permutation(str.begin(), str.end()));
        // sort(v.begin(), v.end());
        
        // cout << *(v.begin()+(iter-1)) << endl;

        int n;
        long double k;
        cin >> n >> k;
        
        long double r = (sqrtl(8*k + 1) - 1) / 2;
        int ur = ceil(r);
        int ub = (ur*(ur+1))/2;
        int dis = ub - k;           
        // cout << dis << endl;
    
        // insert b(rem a)baaaaa..
        string ans(n, 'a');
        // cout << ans << endl;
    
        int i1 = n-(ur+1);
        // cout << i1 << endl;
        ans[i1] = 'b';
        // cout << ans << endl;
        // cout << i1+dis+1 << endl;
        ans[i1+dis+1] = 'b';
    
        cout << ans << endl;
    }
    return 0;
}