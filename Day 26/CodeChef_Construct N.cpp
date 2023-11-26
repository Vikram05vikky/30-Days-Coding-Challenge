Problem : Construct N

Input:
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if((n%2)%7!=0 && n<7)
	        cout<<"NO"<<endl;
	   else
	    cout<<"YES"<<endl;
	}
	return 0;
}
