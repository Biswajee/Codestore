// StlSet.cpp - Using Stl Set and its operations...

/*
In vectors, in order to answer questions like lower bound, upper bound in an
array, we need to sort the elements which takes O(NlogN) time and only then we
can answer the above questions. Now, each time an element is added to the array,
sorting (O(NlogN)) and then answering takes time. So, we use Stl Sets. Here, inserting elements and finding 
lower bound, upper bound happens in O(logN) time.
*/

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    set<int> S;
    S.insert(1);
    S.insert(2);
    S.insert(-1);
    S.insert(-10);
    // At any time set maintains Ascending Order property...

    for(int x: S)           // for i in S: Python3
    cout << x << " ";
    
    cout << endl;
    // -10 -1 1 2
    // Set is always sorted in O(logN) time.

    auto it = S.find(-1);   // auto - auto initialization , S.find() - find an element in Set S. Returns iterator pointer

    // if not found...
    if (it == S.end()) {
        cout << "Not Present\n";
    }
    else {
        cout << "Present\n";
        cout << *it << endl;       // value -1
    }

    auto it2 = S.upper_bound(-1);
    auto it3 = S.lower_bound(-1);

    cout << *it2 << " " << *it3 << endl;

    auto it4 = S.upper_bound(2);

    if(it4 == S.end()) {
        cout << "Couldn't find that !\n";
    }

    // Remove an element...

    S.erase(-1);

    for(int x: S) {
        cout << x << " " ;
    }

    cout << endl;
    // -10 1 2  O(logN)

    return 0;
}