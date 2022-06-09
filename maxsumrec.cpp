// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        // code here
        long long int ans=0;
        for(int i=0;i<C;i++)
        {
              vector<int> v(R,0);
            for(int j=i;j<C;j++)
            {
                int sum=0,temp=0;
                for(int k=0;k<R;k++)
                {
                    v[k]+=M[k][j];
                    temp+=v[k];
                    if(temp>sum)
                    {
                        sum=temp;
                    }
                    if(temp<0)temp=0;
                }
                if(sum>ans)
                {
                    ans=sum;
                }
            }
        }
        if(ans==0)return -1;
        return ans;
    }
    
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(N, M, v) << "\n";
    }
}  // } Driver Code Ends