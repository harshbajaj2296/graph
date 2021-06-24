   #include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int>adj[],int u,int v)
{
	adj[v].push_back(u);
	adj[u].push_back(v);
}
void print(vector<int>adj[],int v)
{
	int i,j;
	for(i=0;i<v;i++)
	{
		for(j=0;j<adj[i].size();j++)
		{
			cout<<adj[i][j]<<"   ";
		}
		cout<<"\n";
	}
}
int main()
{
	    int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    print(adj, V);
    return 0;	
}

