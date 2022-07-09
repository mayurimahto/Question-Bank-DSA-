//Method 1
// Sort and return arr[k-1] element

 int kthSmallest(int arr[], int l, int r, int k) 
    {
        sort(arr,arr+r+1);
        int n = arr[k-1];
        return n;
    }
   