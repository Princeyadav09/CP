
 // } Driver Code Ends


class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<bool>vs(V,false);
        pq.push({0,0});
        int ans=0;
        while(pq.size()>0)
        {
            pair<int,int> temp=pq.top();
            pq.pop();
            int a=temp.first;
            int b=temp.second;
            
            if(vs[b]==true)
            {
                continue;
            }
            vs[b]=true;
            ans=ans+a;
            
            for(auto m:adj[b])
            {
                pq.push({m[1],m[0]});
                
            }
            
            
        }
        
        return ans;
        
    }
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }
