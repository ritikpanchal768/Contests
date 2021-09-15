#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;
const ll MOD = 1e9 + 7;
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

void solve()
{
    ll n,k;
    cin>>n>>k;

    ll a[n];
    ll x;
    ll y=0;
    ll count=0;
    ll msum=0;
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]!=0)
        {
            x=i;
            count++;
            
        }
        if(y==0)
        {
            y=i;
        }
        msum=msum+a[i];
    }
    x=n-x;
    ll l=x;
    ll r=0;
    ll maxd=0;

    for(int i=1;i<=n;i++)
    {
        if(i==n && a[i]==0)
        {
            r=l-x;
            if(maxd<r)
            {
                maxd=r;
            }

        }
        if(l<0 && a[i]!=0)
        {
            r=i-l;
            r=r/2;
            if(maxd<r)
            {
                maxd=r;
            }
            l=i;
        }
        else if(l>=0 && a[i]!=0)
        {
            r=i-l;
            r=r/2;
            if(maxd<r)
            {
                maxd=r;
            }
            l=i;
        }
        
    }
    cout<<maxd<<endl;
    // ll v=msum+binpow(count,k);
    // ll sum=0;
    // if(k<maxd)
    // {
    //     sum=msum+binpow(count,k);
    // }
    // else{
    //     sum=v+(n*(k-maxd));
    // }

    // cout<<sum<<endl;
    
    




}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) 
    {
        //cout << "Case #" << it << ": ";
        solve();
    }
    return 0;
}