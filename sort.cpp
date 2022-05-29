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
   int a[n];
   int ans=0;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
     if(a[i]>0)ans++;
   }
    cout<<ans<<"\n";

}
int32_t main()
{
  RUN;
  int t=1;
 // cin>>t;
  while(t--)
  {
    solve();
  }
}   
