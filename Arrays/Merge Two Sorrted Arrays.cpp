//Bruteforce

// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here
            // TC- nlogn + O(n)
            
            vector<int>arr3;
            
            for(int i=0; i<n; i++)
            {
                arr3.push_back(arr1[i]);
            }
            for(int j=0; j<m; j++)
            {
                arr3.push_back(arr2[j]);
            }
            
            sort(arr3.begin(), arr3.end());
            
            for(int i=0; i<n; i++)
            {
                arr1[i] = arr3[i];
            }
            for(int j=0; j<m; j++)
            {
                arr2[j] = arr3[n+j];
            }
        } 
};

// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
  // } Driver Code Ends


  //Method 2
  //Insertion and Sorting(sawpping)
  // { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            //Insertion Sort
            int i=n-1;
            int j=0;
            
            while(arr1[i]>arr2[j] && i>=0 && j<m)
            {
                swap(arr1[i], arr2[j]);
                i--;
                j++;
            }
            sort(arr1, arr1+n);
            sort(arr2, arr2+m);
            
        }
};

// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
  // } Driver Code Ends


  //Method 3
  //GAP ALGORRITHM 

  // { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            //GAP ALGORITHM METHOD
            
            int i,j,t;
            
            int gap = (n+m)/2;
            
            while(gap>0)
            {
                i=0;
                j=gap;
                
                while(j<n+m)
                {
                    if(i<n && j<n && arr1[i]>arr1[j])
                    {
                        t = arr1[i];
                            arr1[i] = arr1[j];
                            arr1[j] = t;
                    
                    }
                    else if(i<n && j>=n && arr1[i]>arr2[j-n])
                    {
                        t = arr1[i];
                            arr1[i] = arr2[j-n];
                            arr2[j-n] = t;
                    }
                    else
                    {
                        if(arr2[i-n]>arr2[j-n])
                        {
                            t = arr2[i-n];
                            arr2[i-n] = arr2[j-n];
                            arr2[j-n] = t;
                        }
                    }
                    i++;
                    j++;
                }
                if(gap<=1)
                    break;
                else
                    gap = ((gap/2) + (gap%2));
            }
            
            
        } 
};

// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
  // } Driver Code Ends