#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;
const ll MOD = 1e9 + 7;

void solve()
{
    ll n,s;
    cin>>n>>s;

    ll sum=n*(n+1)/2;

    ll ans=sum-s;

    if(ans>=1 && ans<=n)
    {
        cout<<ans<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
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