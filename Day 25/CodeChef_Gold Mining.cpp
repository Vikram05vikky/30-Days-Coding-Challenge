Problem : Gold Mining

Input:
#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        n=n+1;
        
        if((n*y) >= x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
	return 0;
}
