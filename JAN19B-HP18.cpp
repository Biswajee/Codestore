#include <iostream>
#include <vector>
#define blackpink ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int main() {
    blackpink

    long long int t=1,n,a,b,x,adiv=0,bdiv=0,abdiv=0;
    
    cin >> t;
    while (t--) {
        adiv=0,bdiv=0,abdiv=0;
        cin >> n >> a >> b;

        for(long long int i=0; i<n; i++) {
            cin >> x;
            if(x%a==0) {
                adiv++;
            }
            if(x%b==0) {
                bdiv++;
            }
            if(x%a==0 && x%b==0) {
                abdiv++;
            }
        }
        adiv-=abdiv;
        bdiv-=abdiv;
        if(abdiv>0)adiv++;
        if(adiv <= bdiv) cout<<"ALICE\n";
        else cout<<"BOB"<<endl;
    }
    return 0;
 }