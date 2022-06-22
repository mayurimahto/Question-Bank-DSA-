// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int r=0;
        int l=0;
        vector<int>ans;
        long long int currentsum = 0;
        
        while(r<=n)
        {
            if(currentsum<s)
            {
                currentsum+= arr[r];
                r++;
            }
            else if(currentsum>s)
            {
                currentsum-= arr[l];
                l++;
            }
            else if(currentsum == s)
            {
                ans.push_back(l+1);
                ans.push_back(r);
                return ans;
            }
        }
        if(ans.size()==0)
        ans.push_back(-1);
        return ans;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends