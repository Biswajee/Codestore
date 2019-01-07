// PS: Approach didn't work....TLE


// #include <iostream>
// #include <algorithm>
// #include <list>
// #include <iterator>

// #define blackpink ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define ll long long int
// using namespace std;

// //function for printing the elements in a list 
// void showlist(list <int> g) 
// { 
//     list <int> :: iterator it; 
//     for(it = g.begin(); it != g.end(); ++it) 
//         cout << '\t' << *it; 
//     cout << '\n'; 
// }

// int main() {
//     blackpink
    
//     ll t,n,a,b,x,a_lost,b_lost;
//     list<int> A;
//     cin >> t;
    
//     while(t--) {
//         a_lost = 0;
//         b_lost = 0;
//         cin >> n >> a >> b;
//         for(int i=0; i < n; i++) {
//             cin >> x;
//             A.push_back(x);
//         }
//         int chance = 1;
//         for(list <int> :: iterator it = A.begin(); it != A.end(); ++it,chance++) {
//             if(chance%2 != 0) {
//                 // Bob
//                 if((*it%a == 0) && (*it%b == 0)) {
//                     A.erase(it);
//                 }
//                 else if(*it%a == 0) {
//                     A.erase(it);
//                     continue;
//                 }
//             } else {
//                 // Alice
//                 if((*it%b == 0) && (*it%b == 0)) {
//                     A.erase(it);
//                 }
//                 else if(*it%b == 0) {
//                     A.erase(it);
//                     continue;
//                 }
//             }
//             if(it == A.end()) { 
//                 if(chance%2 != 0) {
//                     a_lost = 1;
//                     break;
//                 }
//                 else {
//                     b_lost = 1;
//                     break;
//                 }
//             }
//         }
//         showlist(A);        
//         if(a_lost == 1) {
//             cout << "ALICE\n";
//         }
//         if(b_lost == 1) {
//             cout << "BOB\n";
//         }
//         chance = 0;
//     }
    
//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

#define blackpink ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;

//function for printing the elements in a list 
// void showlist(list <ll> g) 
// { 
//     list <ll> :: iterator it; 
//     for(it = g.begin(); it != g.end(); ++it) 
//         cout << '\t' << *it; 
//     cout << '\n'; 
// }

int main() {
    blackpink
    
    ll t,n,a,b,x,a_lost,b_lost;
    vector<ll> A;
    cin >> t;
    
    while(t--) {
        a_lost = 0;
        b_lost = 0;
        cin >> n >> a >> b;
        
        for(int i=0; i < n; i++) {
            cin >> x;
            A.push_back(x);
        }
        
        // showlist(A);
        
        ll chance = 1;
        for(auto it = A.begin(); it <= A.end(); ++it,chance++) {
            if(chance%2 != 0) {
                // Bob
                if((*it%a == 0) && (*it%b == 0)) {
                    for(auto k = A.begin(); k != A.end(); k++) {
                        if(*k%a == 0)
                        A.erase(k);
                    }
                }
                else if((*it%a == 0) && (*it%b!=0)) {
                    A.erase(it);
                    continue;
                }
            } else {
                // Alice
                if((*it%b == 0) && (*it%a == 0)) {
                    for(auto l = A.begin(); l != A.end(); l++) {
                        if(*l%b == 0)
                        A.erase(l);
                    }
                }
                else if((*it%b == 0) && (*it%a!=0)) {
                    A.erase(it);
                    continue;
                }
            }
            if(it == A.end()) { 
                if(chance%2 != 0) {
                    a_lost = 1;
                    break;
                }
                else if(chance%2 == 0){
                    b_lost = 1;
                    break;
                }
                else {
                    cout << chance << "\n";
                }
            }
        }
        // showlist(A);        
        if(a_lost == 1 && b_lost == 0) {
            cout << "ALICE\n";
        }
        else if(b_lost == 1 && a_lost == 0) {
            cout << "BOB\n";
        }
        else {
            cout << "CHUTIYA BNA DIYA\n";
        }
        chance = 0;
    }
    
    return 0;
}