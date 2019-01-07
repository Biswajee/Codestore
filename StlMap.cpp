// StlMap.cpp - Stl Map exploration!

#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {

    // All operation takes O(logN) time
    map<int, int> A;

    A[1] = 100;
    A[2] = -1;
    A[3] = 200;
    A[10000223] = 1;
    A[3] = 2;

    // A[3] will be assigned with 2 as value...no error

    map<char, int> cnt;
    
    // To find number of characters occuring in string x
    string x = "Biswajit Roy";
    for(char c: x) {
        cnt[c]++;
    }

    cout << cnt['a'] << " " << cnt['z'] << endl;

    //A.find(key)   A.erase(key)
    map<int,int>::iterator it;

    it  = A.find(2);

    cout << it->first << endl;

    A.erase(3);

    // show content:
    for (it=A.begin(); it!=A.end(); ++it)
        cout << it->first << " => " << it->second << "\n";

    cout << endl;

    return 0;
}