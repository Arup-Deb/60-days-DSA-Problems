// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n)
    {
      
     int jump=1;
      int maxr=arr[0];
      int step=arr[0];
      if(n==1)return 0;
      else if(arr[0]==0)
      {
          return -1;
      }
      else 
      {
          for(int i=1;i<n;++i)
          {
              if(i==n-1)
              {
                  return jump;
              }
              maxr=max(maxr,arr[i]+i);
              step--;
              if(step==0)
              {
                  jump++;
                  if(i>=maxr)
                  {
                      return -1;
                  }
                  step=maxr-i;
              }
          }
      }
    }
    
    //USing BFS
//       int minJumps(int arr[], int n){
//       int maxRange=0;
//       int jumps=0;
//       for(int i=0;i<=maxRange && maxRange<n-1;jumps++){
//           int currRange=maxRange;
//           while(i<=maxRange){
//               currRange=max(arr[i]+i,currRange);
//               i++;
//           }
//           maxRange=currRange;
//       }
//       if(maxRange<n-1)return -1;
//       return jumps;
//   }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends