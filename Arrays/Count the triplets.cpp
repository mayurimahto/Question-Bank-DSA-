// Sorting and 2 pointer
using namespace std;
#define ll long long 

ll count(vector<ll> v)
{
    int c=0;
    int n=v.size();
    sort(v.begin(),v.end());
    for(int i=0;i<n-2;i++)
    {
        int j=i+1;
        int k=j+1;
        
        while(k<n)
        {
            if(v[i]+v[j]==v[k])
            {
                j++;
                c++;
               
            }
            
            else if(v[i]+v[j]<v[k])
            {
                j++;
                k--;
            }
            k++;
            
        }
    }
    
    if(c==0)
        return -1;
    return c;
}


int main()
{
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);

    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n;
        cin>>n;
        
        vector<ll> v;
        
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
            
        }
        
        cout<<count(v)<<endl;
    }
    return 0;
}


//Using Hashmap

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    //Using Hashmap
	    
	    unordered_map<int, int>memo;
	    int count=0;
	    
	    for(int i=0; i<n; i++)
	    memo[arr[i]]++;
	    
	    for(int l=0; l<n-1; l++)
	    {
	        for(int r=l+1; r<n; r++)
	        {
	            if(memo.find(arr[l]+arr[r])!=memo.end())
	            {
	            count++;
	            }
	        }
	    }
	    return count;
	}
};

// { Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}  // } Driver Code Ends
