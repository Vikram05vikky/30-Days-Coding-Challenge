Problem : Farmers League

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
	    int a=(n-1)*3;
	    int b=(n-1)/2*3;
	    cout<<a-b<<endl;
	}
	return 0;
}
