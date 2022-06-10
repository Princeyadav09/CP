#include<bits/stdc++.h>
using namespace std;

int CountPS(char S[], int N);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        char S[N+1];
        cin>>S;
        cout<<CountPS(S,N)<<endl;
    }
    return 0;
}

// } Driver Code Ends


int CountPS(char S[], int N)
{
    //code here
    int dp[N+1][N+1];
    memset(dp,1,sizeof(dp));
    int ans=0;
    for(int i=1;i<N;i++)
    {
        for(int j=1;j+i<=N;j++)
        {
            if(S[j-1]==S[j+i-1] and dp[j][j+i-2])
            {
              ans++;  
            }
            else
            {
                dp[j-1][j+i-1]=0;
            }
        }
    }
    return ans;
}