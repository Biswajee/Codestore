#include <bits/stdc++.h>
#include <vector>
using namespace std;

const int N = 1e6+3;
vector<int> g[N];
bool vis[N];

void dfs(int u) {
    vis[u] = 1;
    for(int v: g[u]) {
        if(vis[v]) continue;
        dfs(v);
    }
}

int main() {
    int m, u, v;
    cin >> m;
    m = m-1;
    while(m--) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> common,cnt;

    for(auto x: g[u])
        common.push_back(x);
    for(auto x: g[v])
        common.push_back(x);

    int count = 0;
    for(auto x: common) {
        dfs(x);
        for(int i=0;i<N; i++) {
            if(vis[i] == 1)
                count++;
        }
        cnt.push_back(count);
        count = 0;
        for(int i=0;i<N; i++) {
            vis[i] = 0;
        }
    } 

    cout << endl;
    for(auto x: cnt)
        cout << x << endl;
     
    return 0;
} 