Problem : Chess Pairing
  
#include <iostream>
using namespace std;

int main() {
    int t,n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    if((2*n-x)>=x)
	    cout<<0<<endl;
	    else
	    {
	        int a=(2*n)-x;
	        x=x-a;
	        cout<<x<<endl;
	    }
	}
	return 0;
}
