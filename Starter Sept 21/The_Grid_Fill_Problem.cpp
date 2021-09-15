#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;
const ll MOD = 1e9 + 7;

void solve()
{
    int n;
    cin>>n;
    if(n % 2==0)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<-1<<" ";
            }
            cout<<endl;
        }
    }
    else{
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    cout<<-1<<" ";
                }
                else{
                    cout<<1<<" ";
                }
            }
            cout<<endl;
        }

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