#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
    
        while(x>4)
        {
            x=x-4;
        }
        if(x==4)
        {
            cout<<"North"<<endl;
        }
        else if(x==3)
        {
            cout<<"West"<<endl;
        }
        else if(x==2)
        {
            cout<<"South"<<endl;
        }
        else{
            cout<<"East"<<endl;
        }
    }
	return 0;
}
