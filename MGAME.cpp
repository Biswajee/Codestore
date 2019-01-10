#include <iostream>
// #include <tuple>
// #include <vector>
using namespace std;

int main() {
    int t,n,p,res,score,count;

    cin >> t;
    while(t--) {
        cin >> n >> p;
        // vector<tuple<int,int,int>> valid;
        if(n == 0)
            break;
        res=0;
        count=0;
        for(int i=1; i <= p; i++) {
            for(int j=1; j <=p; j++) {
                for(int k=1; k<=p; k++) {
                    score = (((n%i)%j)%k)%n;
                    if(res < score) {
                        res = score;
                        // valid.push_back(make_tuple(i,j,k));
                    }
                }
            }
        }
        int value=0;
        for(int i=1; i <= p; i++) {
            for(int j=1; j <=p; j++) {
                for(int k=1; k<=p; k++) {
                    value = (((n%i)%j)%k)%n;
                    if(value == res) {
                        count++;
                    }
                }
            }
        }
        cout << count << endl;  
        // for(auto& tuple: valid) {
        //     cout << get<0>(tuple) << " " << get<1>(tuple) << " " << get<2>(tuple) << endl;   
        // }
    }
    return 0;
}