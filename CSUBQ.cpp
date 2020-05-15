#pragma GCC optimize("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

struct Node {
    ll num_ones_subarrays;
    int len, len_ones_left, len_ones_right;
    
    Node(int value = 0) {
        assert(value == 0 || value == 1);
        len = 1;
        
        num_ones_subarrays = len_ones_left = len_ones_right = value;
    }
    
    static Node neutral() {
        return Node(0);
    }
};

Node merge(Node a, Node b) {
    Node res;
    
    res.len = a.len + b.len;
    
    res.len_ones_left = a.len_ones_left;
    if (a.len_ones_left == a.len)
        res.len_ones_left += b.len_ones_left;
    
    res.len_ones_right = b.len_ones_right;
    if (b.len_ones_right == b.len)
        res.len_ones_right += a.len_ones_right;
    
    res.num_ones_subarrays =
        a.num_ones_subarrays +
        b.num_ones_subarrays +
        a.len_ones_right * (ll)b.len_ones_left;
    
    return res;
}


// Internally, counts number of subarrays on segment, whose elements are <max_bound (fixed for all queries)
class SegmentTree {
public :
    int n;
    vector<Node> tree;
    int max_bound;
    
    SegmentTree(int n, int max_bound): n(n), tree(n * 4), max_bound(max_bound) {
        for (int i = 0; i < n; i++)
            change(i, 0);
    }
    
    void change(int index, int new_value) {
        change(0, 0, n - 1, index, new_value < max_bound ? 1 : 0);
    }
    
    ll query_max_at_most(int l, int r) {
        return query(0, 0, n - 1, l, r).num_ones_subarrays;
    }
    
private :
    void change(int t, int l, int r, int index, int value) {
        if (l == r)
            return void(tree[t] = Node(value));
        
        int m = (l + r) / 2;
        if (index <= m)
            change(t * 2 + 1, l, m, index, value);
        else
            change(t * 2 + 2, m + 1, r, index, value);
        
        tree[t] = merge(tree[t * 2 + 1], tree[t * 2 + 2]);
    }
    
    Node query(int t, int l, int r, int x, int y) {
        if (x > r || y < l) return Node::neutral();
        
        if (l >= x && r <= y)
            return tree[t];
                   
        int m = (l + r) / 2;
        return merge(query(t * 2 + 1, l, m, x, y), query(t * 2 + 2, m + 1, r, x, y));
    }
};




int main() {
    BLACKPINK
    int t,n,q,L,R;
    cin >> n >> q >> L >> R;
    SegmentTree a(n, L), b(n, R + 1);

    for (int i=0; i<q; i++) {
        int query_type;
        cin >> query_type;
        
        if (query_type == 1) {
            int index, new_value;
            cin >> index >> new_value;
            index--;
            
            a.change(index, new_value);
            b.change(index, new_value);
        }
        else {
            int l, r;
            cin >> l >> r;
            l--; r--;
            
            ll answer = b.query_max_at_most(l, r) - a.query_max_at_most(l, r);
            assert(answer >= 0);
            cout << answer << "\n";
        }
    }
    return 0;
}