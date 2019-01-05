#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long int n,a,b,x,chances, a_lost, b_lost;
    
    vector<long long int> A;
    vector<long long int>:: iterator k;
    vector<long long int>:: iterator l;

    cin >> t;
    while (t--) {
        chances = 0;
        a_lost = 0;
        b_lost = 0;

        cin >> n >> a >> b;

        for(int i=0; i < n; i++) {
            cin >> x;
            A.push_back(x);
        }

        
        for(chances = 1; ; chances++) {
            if(chances%2 != 0) {
                // Bob
                for(k = A.begin(); k != A.end(); ++k) {
                    if(*k%a==0 && *k%b == 0) {
                        A.erase(k);
                    }
                    if(*k%a==0) {
                        A.erase(k);
                        break;
                    }
                }
                if(k == A.end()) {
                    a_lost = 1;
                    break;
                }
            }
            else {
                // Alice
                for(l = A.begin(); l != A.end(); ++l) {
                    if(*l%b==0 && *l%a==0) {
                        A.erase(l);
                    }
                    if(*l%b==0) {
                        A.erase(l);
                        break;
                    }
                }
                if(l == A.end()) {
                    b_lost = 1;
                    break;
                }
            }
        }

        if(a_lost == 1) {
            cout << "ALICE\n";
        } 
        else if(b_lost == 1) {
            cout << "BOB\n";
        }
        else {
            cout << "FUCK THIS GAME\n";
        }
    }
    return 0;
}