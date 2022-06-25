// Method1 just apply sort function

//Method 2 
// Counting sort
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
         int i,j,c0=0,c1=0,c2=0;
           for(i=0;i<n;i++)
           {
               if(a[i]==0)
               c0++;
               if (a[i]==1)
               c1++;
               if(a[i]==2)
               c2++;
           }
           for(i=0;i<c0;i++)
           a[i]=0;
           for(i=c0;i<c1+c0;i++)
           a[i]=1;
           for(i=c1+c0;i<n;i++)
           a[i]=2;
        
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends


  //Method3
  //low, mid, high
  //Butch National Flag Algorithm
  // TC- O(N), SC-O(1)

  // { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        //Dutch Nation Flag Algorithm
        
        int low=0, mid =0;
        int high = n-1;
        
        while(mid<=high)
        {
            if(a[mid]==0)
            {
                swap(a[low], a[mid]);
                low++;
                mid++;
                
            }
            else if(a[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(a[mid], a[high]);
                high--;
            }
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends