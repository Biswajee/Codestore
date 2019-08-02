#include <bits/stdc++.h>
#define ll long long int
using namespace std; 

ll string_to_integer(string number) {
    ll num = 0;
    for(int i=0; i < (int)number.size(); i++)
    {
        num*=10;
        num+=int(number[i]-'0');
    }
    return num;
}


int main() 
{ 
    string  number_a;
    ll number_b;
   
    cin >> number_a >> number_b;
    
    ll ma = 9999999999;
    sort(number_a.begin(), number_a.end());
	// generate all permutaions of the number...
	do {
        ll res = string_to_integer(number_a);
        if(res > number_b)
        {
            ma=min(ma,res);
        }
	} while(next_permutation(number_a.begin(), number_a.end()));
	
	if(ma!=9999999999)
	{
	    cout<<ma<<"\n";
	}
	else
    cout << -1 << endl;	
	return 0; 
}