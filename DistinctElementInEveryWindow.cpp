#include <bits/stdc++.h>
using namespace std;
void countDistinct(int [], int , int );
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		countDistinct(a,k,n);cout<<endl;
	}
	return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete below method */

/*
Explanation: 
7 4
1 2 1 3 4 2 3
So take all elements of in window size 4
1) 1 2 1 3 => Here there are only '3' distinct elements. (1 is repeated)
2) 2 1 3 4 => Here there are only '4' distinct elements.
3) 1 3 4 2 => Here there are only '4' distinct elements.
4) 3 4 2 3 => Here there are only '3' distinct elements. (3 is repeated)
Hence, output 3 4 4 3
*/
#include <set>
void countDistinct(int A[], int k, int n)
{
    set<int> s;
    for(int j=0; j<n; j++) {
        int i;
        for(i=j; i < k+j; i++) {
            s.insert(A[i]);
        }
        cout << s.size() << " ";
        s.clear();
        if(i == n) break;
    }
}