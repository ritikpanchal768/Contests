#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;
const ll MOD = 1e9 + 7;

void solve()
{
    int n,s;
    cin>>n>>s;

    int z;

    if(n>=s)
    {
        cout<<s<<endl;
    }
    else{
        z=s-n;
        cout<<n-z<<endl;
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