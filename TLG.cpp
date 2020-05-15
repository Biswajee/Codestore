#pragma GCC optimize("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#define ll long long
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() {
    BLACKPINK
    ll rounds,game1=0,game2=0,score1=0,score2=0,leadDiff=0,prevLead=0;
    pair<ll,ll> leading;
    cin >> rounds;
    while(rounds--) {
        cin >> game1 >> game2;
        score1+=game1, score2+=game2;
        leadDiff=abs(score1-score2);
        // cout << "Diff : " << leadDiff << " " << prevLead << endl;
        if(leadDiff>=prevLead) {
            if(score1>score2) {
                leading = {1, leadDiff};
            } else if(score1<score2) {
                leading = {2, leadDiff};
            }
        }
        prevLead=max(prevLead,leadDiff);
    }
    cout << leading.first << " " << leading.second << endl;
    return 0;
}