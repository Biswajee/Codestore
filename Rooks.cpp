#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL); 

#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define mp make_pair
#define pu push
#define pp pop_back
#define in insert
#define ld long double
#define endl '\n'
#define debug cout << "Hold right there sparky.....\n";
#define forn(low,high,i) for(i=low;i<high;i++)
#define forrev(high,low,i) for(i = high; i>= low;i--)
#define trace(x) cerr << #x << ": " << x << " " << endl;

typedef long long int ll;
typedef unordered_map<int,int> umi;
typedef unordered_map<ll,ll> uml;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
const ll mod =998244353;	
ll gcd(ll a,ll b)
{
	if(b==0)
		return a;
	else return gcd(b,a%b);
}

/*void dfs(int t,int s1)
{
	visited[t]=true;
	for(int i=0;i<v[t].size();++i)
	{
		if(!visited[v[t][i]] && edge[t][i]<=s1)
		{
			s.insert(v[t][i]);
			dfs(v[t][i],s1);
		}
		
	}
}*/
int nCrModp(int n, int r, int p) 
{ 
    // The array C is going to store last row of 
    // pascal triangle at the end. And last entry 
    // of last row is nCr 
    int C[r+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1; // Top row of Pascal Triangle 
  
    // One by constructs remaining rows of Pascal 
    // Triangle from top to bottom 
    for (int i = 1; i <= n; i++) 
    { 
        // Fill entries of current row using previous 
        // row values 
        for (int j = min(i, r); j > 0; j--) 
  
            // nCj = (n-1)Cj + (n-1)C(j-1); 
            C[j] = (C[j] + C[j-1])%p; 
    } 
    return C[r]; 
} 

int main()
{
	IOS
	int t;
	cin>>t;
	while(t--)
	{
	   int n,k;
	   cin>>n>>k;
	   int col[n+1],row[n+1];
	   memset(col,0,sizeof(col));
	   memset(row,0,sizeof(row));
	   for(int i=0;i<k;++i)
	   {
	       int p,q; cin>>p>>q;
	       row[p]=1;col[q]=1;
	   }
	   vector <int> v;
	   vector<int> v1;
	   for(int i=1;i<=n;++i) if(row[i]==0) v.push_back(i);
	   for(int i=1;i<=n;++i) if(col[i]==0) v1.push_back(i);
	   cout<<n-k<<" ";
	   for(int i=0;i<v.size();++i) cout<<v[i]<<" "<<v1[i]<<" ";
	   cout<<endl;
	}
}
	