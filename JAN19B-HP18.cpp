#include <iostream>
#include <vector>
#define blackpink ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int main() {
    blackpink

    long long int t,n,a,b,x,adiv=0,bdiv=0,abdiv=0;
    
    cin >> t;
    while (t--) {
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
        // cout << adiv << " " << bdiv << " " << abdiv << endl;
        if(a == b) {
            cout << "BOB\n";
        }
        else {
            if((adiv-abdiv)==0 && (bdiv-abdiv)==0) {
                cout << "BOB\n";
            } 
            else {
                if((adiv-abdiv)==0 || (bdiv-abdiv)==0) {
                    if((adiv-abdiv)==0) {
                        cout << "ALICE\n";
                    }
                    if((bdiv-abdiv)==0) {
                        cout << "BOB\n";
                    }
                } else {
                    if(adiv > bdiv) {
                        cout << "BOB\n";
                    }
                    if(bdiv > adiv) {
                        cout << "ALICE\n"; 
                    }
                }
            }
        }
        adiv=0,bdiv=0,abdiv=0;
    }
    return 0;
 }