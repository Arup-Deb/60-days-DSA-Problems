// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
#include<stack>
class Solution{
public:
    vector<int> leftSmaller(int n, int arr[]){
      

    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    
    for(int i=0;i<n;i++) {
        int curr = arr[i];
        while(s.top()>=curr)
        {
            s.pop();
        }
        //ans is stack ka top
        ans[i]=s.top();
        s.push(curr);
    }
    return ans;
}
    
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends