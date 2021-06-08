#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int xa,xb,Xa,Xb;
        cin>>xa>>xb>>Xa>>Xb;
        
        int s;
        s=((Xa/xa)+(Xb/xb));
        cout<<s<<endl;
    }
    
	return 0;
}
