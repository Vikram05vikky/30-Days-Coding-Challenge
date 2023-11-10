Problem :
There is a circular track of length M consisting of M checkpoints and M bidirectional roads such that each road has a length of 1 unit.

Input:
#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int x=min(abs(a-b),abs(abs(a-b)-c));
	    cout<<x<<endl;
	}
	return 0;
}
