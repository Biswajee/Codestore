def solve(parenthesis):
    stack = []
    cur = 0
    ret = 0
    for i, e in enumerate(parenthesis):
        if e == '(':
            stack.append(cur)
            cur = 0
        elif e == ')' and len(stack) > 0:
            cur += stack.pop() + 2
            ret = max(ret, cur)
        elif e == ')' and len(stack) == 0:
            cur = 0
    return ret
    
t = int(input())
while(t != 0):
    x = input()
    print(solve(x))
    t = t-1




# // #include <iostream>
# // #include <algorithm>
# // #include <stack>
# // #define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
# // using namespace std;

# // int main() {
# //     BLACKPINK
# // 	int t;
# // 	cin >> t;
# // 	string x;
# // 	while(t--) {
# // 	    cin >> x;
# // 	    stack<char> s;
# // 	    int count = 0;
# // 	    for(int i=0; i<x.length(); i++) {
# // 	        if(x[i] == '(') s.push(x[i]);
# // 	        if(x[i] == ')' && s.empty() == false) { s.pop(); count +=2;} 
# // 	    }
# // 	    cout << count << endl;
# // 	}
# // 	return 0;
# // }



# // // Longest valid substring...GFG
# // #include <iostream>
# // #include <algorithm>
# // #include <vector>
# // #define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
# // using namespace std;

# // int main() {
# //     BLACKPINK
# // 	int t;
# // 	cin >> t;
# // 	string x;
# // 	while(t--) {
# // 	    cin >> x;
# // 	    vector<char> s;
# // 	    int count = 0, m = 0;
# // 	    for(int i=0; i < x.length(); i++) {
# // 	        if(x[i] == '(') s.push_back(x[i]);
# // 	        else if(x[i] == ')' && s.size() != 0) { s.pop_back(); count +=2; m = max(m,count);}
# // 	        else if(x[i] == ')' && s.size() == 0) count = 0;
# // 	    }
	    
# // 	    cout << count << endl;
# // 	}
# // 	return 0;
# // }