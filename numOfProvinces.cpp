#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void dfs(vector<int> adj1[],vector<bool> &vis,int node)
    {
        vis[node]=true;
        for(int it:adj1[node])
        {
            if(!vis[it])
            dfs(adj1,vis,it);
        }
    }
    
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<bool> vis(V,false);
        int ans=0;
        vector<int> adj1[V];
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if(adj[i][j]==1)
                {
                    adj1[i].push_back(j);
                }
            }
        }
        for(int i=0;i<V;i++)
        {
            if(!vis[i]){
               ans++;
               dfs(adj1,vis,i);
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}  // } Driver Code Ends