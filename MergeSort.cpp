#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int left[],int right[],int arr[],int l,int r)
    {
         // Your code here
         int i=0,j=0,k=0;
         while(i<l and j<r)
         {
             if(left[i]<=right[j])
             {
                 arr[k]=left[i];
                 i++;
                 k++;
             }
             else
             {
                 arr[k]=right[j];
                 j++;
                 k++;
             }
         }
         while(i<l)
         {
             arr[k]=left[i];
             k++;
             i++;
         }
         while(j<r)
         {
             arr[k]=right[j];
             j++;
             k++;
         }
    }
    public:
    void mergeSort(int arr[], int lf, int rt)
    {
        //code here
        if(rt<1)return;
        int mid=(rt+1)/2;
        int l[mid];
        int r[(rt+1)-mid];
        for(int i=0;i<mid;i++)
        {
            l[i]=arr[i];
        }
        for(int i=mid;i<=rt;i++)
        {
            r[i-mid]=arr[i];
        }
        mergeSort(l,0,mid-1);
        mergeSort(r,0,(rt+1)-mid-1);
        merge(l,r,arr,mid,((rt+1)-mid));
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends