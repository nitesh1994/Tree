#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Graph{
int v;
vector<int> *V;
public:
  Graph(int);
  void add_edge(int,int);
  void BFS(int);
};
Graph::Graph(int v)
{
	this->v=v;
	V=new vector<int>[v];
}
void Graph::add_edge(int a,int b)
{
	V[a].push_back(b);
}
void Graph::BFS(int s)
{
	queue<int> q;
	bool *g=new bool[v];
	for(int i=0;i<v;i++)
	g[i]=false;
	g[s]=true;
	q.push(s);
	while(!q.empty())
	{
		int x=q.front();
		q.pop();
		cout<<x;
		for(vector<int>::iterator it=V[x].begin();it!=V[x].end();++it)
		{
			if(!g[*it])			
			{
				q.push(*it);
				g[*it]=true;
			}
		}


	}

}
int main()
{
	Graph G(3);
	G.add_edge(0,2);
	G.add_edge(0,3);
	G.add_edge(2,3);
	G.BFS(0);	

}
