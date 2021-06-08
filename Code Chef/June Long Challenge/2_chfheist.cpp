#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int D,d,p,q;
        cin>>D>>d>>p>>q;
        
        long long int sum=0;
        long long int k=D/d;
        sum=(d*(p*k+q*((k-1)*(k)/2)));


        if(D%d==0)
        {
            cout<<sum<<endl;
        }
        else{
            sum=(sum+(D%d)*(p+((k)*q)));
            
            cout<<sum<<endl;
        }
        
    }
    
	return 0;
}
