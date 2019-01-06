#include <iostream>
#include <vector>
#define blackpink ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int main() {
    blackpink

    int t,n,a,b,x,chance,a_lost,b_lost;
    vector<int> A;
    cin >> t;
    while (t--) {
        a_lost = 0;
        b_lost = 0;
        cin >> n >> a >> b;

        for(int i=0; i<n; i++) {
            cin >> x;
            A.push_back(x);
        }

        if(a == b) {
            cout << "BOB\n";
        }
        else {
            for(int chance = 1; a_lost != 1 && b_lost != 1; chance++) {
                if(chance%2 != 0) {
                    // BOB's turn
                    for(auto i = A.begin(); i != A.end(); ++i) {
                        if(*i%a==0 && *i%b==0) {
                            A.erase(i);
                        }
                    }
                } else {
                    // ALICE's turn
                    for(auto i = A.begin(); i != A.end(); ++i) {
                        if(*i%a==0 && *i%b==0) {
                            A.erase(i);
                        }
                    }
                }
            }
        }

        for(auto i: A) {
            cout << i << " ";
        }
        if(a_lost == 1) {
            cout << "ALICE\n";
        }
        if(b_lost == 1) {
            cout << "BOB\n";
        }
    }
    return 0;
 }