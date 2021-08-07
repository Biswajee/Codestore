#include <iostream>
#define int long long int
#define N 1000
using namespace std;

// store the relation in matrix
int adj_matrix[N][N] ={0};


bool knows(int a, int b) {
	return adj_matrix[a][b];
}

int findCelebrity(int n) {	
	int indegree[n]={0},outdegree[n]={0};
	
	//query for all edges
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			int x = knows(i,j);
			
			//set the degrees
			outdegree[i]+=x;
			indegree[j]+=x;
		}
	}
	
	//find a person with indegree n-1
	//and out degree 0
	for(int i=0; i<n; i++)
	if(indegree[i] == n-1 && outdegree[i] == 0)
		return i;
	
	return -1;
}

int32_t main() {
  int t,m,n,x,y;
  cin >> t;
  while(t--) {
    cin >> n >> m;
    // input relation between persons
    for(int i=0; i<m; i++) {
      cin >> x >> y;
      adj_matrix[x-1][y-1]++;
    }
    
    // print the matrix
    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<m; j++) {
    //         cout << adj_matrix[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    
    int id = findCelebrity(n);
    id == -1 ? cout << "dead" : cout << "alive " << id+1 << "\n";
  }
  return 0;
}