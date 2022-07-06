// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string equilibrium(int *arr, int n) {
        // code here
        int sum=0;
        int leftsum=0;
        int rightsum=0;
        for(int i=0; i<n; i++)
        {
            sum+=arr[i];
        }
        
        for(int i=0; i<n; i++)
        {
            rightsum= sum-leftsum-arr[i];
            if(rightsum == leftsum)
            return "YES";
            leftsum+=arr[i];
        }
        return "NO";
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.equilibrium(a, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends