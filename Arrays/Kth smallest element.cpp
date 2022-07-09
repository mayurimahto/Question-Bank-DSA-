//Method 1
// Sort and return arr[k-1] element

 int kthSmallest(int arr[], int l, int r, int k) 
    {
        sort(arr,arr+r+1);
        int n = arr[k-1];
        return n;
    }
   

   //Method 2
   // Min or Max Heap


   //Method 3 
   //Priority Queue
   // { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int> pq;
        
        for(int i=l; i<=r; i++)
        {
            pq.push(arr[i]);
        }
        
        int size = l+r+1;
        
        while(size>k)
        {
            pq.pop();
            size--;
        }
        return pq.top();
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends