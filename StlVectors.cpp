// StlVector.cpp - A Guide to using STL Vectors

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    // C++ Stl
    vector<int> A = { 11,2,3,14 }; 

    cout << A[1] << endl;

    sort(A.begin(), A.end());   // O(NlogN)

    //2,3,11,14
    
    
    // Binary Search - O(logN)
    bool present = binary_search(A.begin(),A.end(),3);  //Searching if 3 is present in Array/Vector
    // true

    present = binary_search(A.begin(),A.end(),4);     //Search if 100 present in Array
    // false

    // Insert more elements...
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    //2,3,11,14,100,100,100,100

    vector<int>::iterator it = lower_bound(A.begin(),A.end(), 100);
    // return the first occuring 100 in the vector. >=

    vector<int>::iterator it2 = upper_bound(A.begin(),A.end(), 100); // >

    cout << *it << " " << *it2 << endl;
    cout << it2 - it << endl;   //4 O(1): Iterators perform operation in O(1) time.

    return 0;
}