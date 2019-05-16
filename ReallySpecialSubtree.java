import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


public class Solution {
	int V;
	int E;
	
	Edge[] edge;
	public Solution(int v,int e){
		V=v;
		E=e;
		edge=new Edge[e];
		for(int i=0;i<e;i++){
			edge[i]=new Edge();
		}
	
	}
	public void insert(int i,int s,int d,int l){
		edge[i].source=s;
		edge[i].destination=d;
		edge[i].length=l;
	}
	
public static void main(String[] args){
	Scanner sc=new Scanner(System.in);
	int num_vertices=sc.nextInt();
	int num_edges=sc.nextInt();
	Solution g1=new Solution(num_vertices,num_edges);
	for(int i=0;i<num_edges;i++){
		int a=sc.nextInt();
		int b=sc.nextInt();
		int l=sc.nextInt();
		g1.insert(i,a, b, l);
	}
	Arrays.sort(g1.edge,new Comparator<Edge>(){
		public int compare(Edge a,Edge b){
			if(a.length!=b.length){
			return a.length-b.length;
			}
			else return a.source+a.destination-(b.source+b.destination);
		}
	});
	int j=0;
	Solution g2=new Solution(num_vertices,num_vertices-1);
	int[] parent=new int[g2.V+1];
	Arrays.fill(parent, -1);
	for(int i=0;i<g2.E;i++){
		while(g2.findCycle(parent,g1.edge[j])){
			j++;
		}
		
		g2.edge[i]=g1.edge[j];
		j++;
	}
	int ans=0;
	for(Edge e:g2.edge){
		ans=ans+e.length;
	}
	System.out.println(ans);
}
public boolean findCycle(int[] parent,Edge e){
	int a=find(parent,e.source);
	int b=find(parent,e.destination);
	if(a==b){
		return true;
	}
	else{
		union(parent,a,b);
	}
	return false;
}
public int find(int[] parent,int a){
	if(parent[a]==-1){
		return a;
	}
	return find(parent,parent[a]);
}
public void union(int[] parent,int a,int b){
	parent[a]=b;
}

}
class Edge {
int source;
int destination;
int length;

}




/*

Didn't work...

#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int kruskals(int g_nodes, vector<int> g_from, vector<int> g_to, vector<int> g_weight) {
    int res_wt = 0;
    vector<tuple<int, int, int>> v;
    vector<int> visited;
    vector<int>::iterator wt = g_weight.begin(), from = g_from.begin(), to = g_to.begin();
    for(int i=0; i<g_nodes; i++) {
        v.push_back(make_tuple(*(wt + i),*(from + i),*(to + i)));
    }
    sort(v.begin(), v.end());

    vector<tuple<int, int, int>>::iterator it = v.begin();
    for(int i=0; i<g_nodes; i++) {
      if (find(visited.begin(), visited.end(), get<1>(*(it + i))) ==
              visited.end() ||
          find(visited.begin(), visited.end(), get<2>(*(it + i))) ==
              visited.end()) {
                  visited.push_back(get<1>(*(it + i)));
                  visited.push_back(get<2>(*(it + i)));
                  res_wt = res_wt + get<0>(*(it + i));
        }
    }
    return res_wt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string g_nodes_edges_temp;
    getline(cin, g_nodes_edges_temp);

    vector<string> g_nodes_edges = split(rtrim(g_nodes_edges_temp));

    int g_nodes = stoi(g_nodes_edges[0]);
    int g_edges = stoi(g_nodes_edges[1]);

    vector<int> g_from(g_edges);
    vector<int> g_to(g_edges);
    vector<int> g_weight(g_edges);

    for (int i = 0; i < g_edges; i++) {
        string g_from_to_weight_temp;
        getline(cin, g_from_to_weight_temp);

        vector<string> g_from_to_weight = split(rtrim(g_from_to_weight_temp));

        int g_from_temp = stoi(g_from_to_weight[0]);
        int g_to_temp = stoi(g_from_to_weight[1]);
        int g_weight_temp = stoi(g_from_to_weight[2]);

        g_from[i] = g_from_temp;
        g_to[i] = g_to_temp;
        g_weight[i] = g_weight_temp;
    }

    int res = kruskals(g_nodes, g_from, g_to, g_weight);

    // Write your code here.

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
*/