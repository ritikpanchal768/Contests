#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==1 || a[i]==2 || a[i]==3 || a[i]==4 || a[i]==5 || a[i]==6 || a[i]==7)
            {
                count++;
            }
            if(count==7)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
	return 0;
}