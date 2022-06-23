

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    vector<long long> nlw(long long arr[],int n)
    {
        deque<long long> dq;
        vector<long long> v;
        for(int i=n-1;i>=0;i--)
        {
            while(!dq.empty() and arr[dq.back()]>=arr[i])
            {
                dq.pop_back();
            }
            if(dq.empty())
            {
                v.push_back(n);
            }
            else
            {
                v.push_back(dq.back());
            }
            dq.push_back(i);
        }
        reverse(v.begin(),v.end());
        return v;
    }
    
    vector<long long> plw(long long arr[],int n)
    {
        deque<long long> dq;
        vector<long long> v;
        for(int i=0;i<n;i++)
        {
             while(!dq.empty() and arr[dq.back()]>=arr[i])
            {
                dq.pop_back();
            }
            if(dq.empty())
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(dq.back());
            }
            dq.push_back(i);
        }
        return v;
    }
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<long long> a=nlw(arr,n);
        vector<long long> b=plw(arr,n);
        long long ans=0;
       // for(auto i:a)cout<<i<<" ";
       // cout<<"\n";
       // for(auto i:b)cout<<i<<" ";
        for(int i=0;i<n;i++)
        {
            long long temp=arr[i]*((a[i]-i)+(i-b[i])-1);
            ans=max(ans,temp);
        }
        return ans;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends