// max left and min right 
// max left <= a[i] <= min right


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int findElement(int arr[], int n) {
    int l[n];
    int r[n];

    int maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
        l[i] = maxi;
    }

    int mini = arr[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {

        mini = min(mini, arr[i]);
        r[i] = mini;
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] >= l[i - 1] and arr[i] <= r[i + 1])
        {
            return arr[i];
        }
    }

    return -1;
}