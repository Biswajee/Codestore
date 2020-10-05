#include <bits/stdc++.h>
#include <vector>
#include <set>
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std; 

/* Global variables - ZERO FUCKS Given*/
vector<vector<int>> head; 

// Function sort the array using Cycle sort 
int cycle_sort(vector<int> arr, int n) { 
    vector<int> temp;
	int start; 
	for (start = 0; start <= n - 2; start++) { 
        temp.clear();
		int element = arr[start];
		int pos = start; 
		for (int i = start + 1; i < n; i++) 
			if (arr[i] < element) 
				pos++; 
        if (pos == start) 
			continue; 

		while (element == arr[pos]) 
			pos += 1; 

		if (pos != start) { 
            temp.push_back(element);
			swap(element, arr[pos]); 
            temp.push_back(element);
		} 

		while (pos != start) { 
			pos = start; 
			for (int i = start + 1; i < n; i++) 
				if (arr[i] < element) 
					pos += 1; 
			while (element == arr[pos]) 
				pos += 1; 
			if (element != arr[pos]) { 
				swap(element, arr[pos]);
                temp.push_back(element); 
			} 
		} 
        if(temp.size() < 3) return -1;  // Could not form array of size 3...
        head.push_back(temp);
	} 
	return start;
} 


int main() 
{ 
    BLACKPINK
    int t,n,k;
    cin >> t;
    while(t--) {
        head.clear();
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin >> arr[i]; 
        int cycle_count = cycle_sort(arr, n); 

        if(cycle_count == -1) {
            cout << -1 << endl;
            continue;
        }

        if(cycle_count <= 2) {
            cout << -1 << endl;
            continue;
        } 
        if(cycle_count > 2 && (int)cycle_count/3 <= k) {
            cout << (int) ceil(cycle_count/3) << endl;
            for(auto x : head) {
                for(auto a : x) {
                    cout << a << " ";
                }
                cout << endl;
            }
        }
        else cout << -1 << endl;
    }
	 
	return 0; 
} 



/*

11
3 9
3 2 1
4 16
4 3 2 1
5 25
5 4 3 2 1
6 36
6 5 4 3 2 1
7 49
7 6 5 4 3 2 1
8 64
8 7 6 5 4 3 2 1
9 81
9 8 7 6 5 4 3 2 1 
10 100
10 9 8 7 6 5 4 3 2 1
11 121
11 10 9 8 7 6 5 4 3 2 1
12 144
12 11 10 9 8 7 6 5 4 3 2 1
13 169
13 12 11 10 9 8 7 6 5 4 3 2 1

*/