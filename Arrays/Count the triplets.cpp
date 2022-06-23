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
