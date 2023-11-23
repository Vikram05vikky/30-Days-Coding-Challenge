Problem : Two Ranges

Input:
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int s=min(a,c);
	    int e=max(b,d);
	    int o=0;
	    for(int i=s;i<=e;i++){
	        if((i>=a && i<=b)||(i>=c && i<=d)){
	            o++;
	        }
	    }
	    cout<<o<<endl;
	}
	return 0;
}
