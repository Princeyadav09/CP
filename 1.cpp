// हर हर महादेव...
// शिव हरे शिव राम सखे प्रभु...
#include<bits/stdc++.h>
#define int  long long
#define RUN ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi 3.1415926536
#define pr pair<int,int>
#define inf 1e18
using namespace std;

void solve()
{
  int n; cin>>n;
  int q[n];
  int req[n+1]={0};
  for (int i = 0; i < n; ++i)
  {
      cin>>q[i];
  }
  for (int i = 0; i < n; ++i)
  {
      while(q[i]>n)
      {
        q[i]/=2;
      }
      while(req[q[i]]>0 and q[i]/2!=0)
      {
        q[i]/=2;
      }
      req[q[i]]++;
  }
 set<int> s;
 for (int i = 0; i < n; ++i)
 {
     s.insert(q[i]);
 }
 if (s.size()==n)
 {
     cout<<"YES\n";
 }
 else
 {
    cout<<"NO\n";
 }
}
int32_t main()
{
  RUN;
  int t=1;
  cin>>t;
  while(t--)
  {
    solve();
  }
}   