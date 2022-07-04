#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	void dfs(vector<int> adj[],vector<bool> &vis,stack<int> &s,int i)
	{
	    vis[i]=true;
	    for(auto it:adj[i])
	    {
	        if(!vis[it])
	        {
	            dfs(adj,vis,s,it);
	        }
	    }
	    s.push(i);
	}
	
	void revdfs(vector<int> trans[],vector<bool> &vis,int node)
	{
	    vis[node]=true;
	    for(auto it:trans[node])
	    {
	        if(!vis[it])
	        {
	            revdfs(trans,vis,it);
	        }
	    }
	}
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        //code here
        int scc=0;
        stack<int> s;
        vector<bool> vis(V,false);
        vector<int> ans;
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfs(adj,vis,s,i);
            }
        }
        vector<int> trans[V];
        for(int i=0;i<V;i++)
        {
            vis[i]=false;
            for(auto it:adj[i])
            {
                trans[it].push_back(i);
            }
        }
        
        while(!s.empty())
        {
            int node=s.top();
            s.pop();
            if(!vis[node])
            {
                scc++;
                revdfs(trans,vis,node);
            }
        }
        return scc;
    }
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends