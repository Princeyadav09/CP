// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool ispossible(int A[],int mid,int N,int M)
    {
        int sum=0,st=1;
        for(int i=0;i<N;i++)
        {
            if(sum+A[i]<=mid)sum+=A[i];
            else
            {
                if(A[i]<=mid)
                {
                    sum=A[i];
                    st++;
                    if(st>M)return false;
                }
                else return false;
            }
        }
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        int low=0,high=0;
        int ans=-1;
        if(M>N)return ans;
        for(int i=0;i<N;i++)
        {
            if(A[i]>low)low=A[i];
            high+=A[i];
        }
        if(M==N)return low;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(ispossible(A,mid,N,M))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends