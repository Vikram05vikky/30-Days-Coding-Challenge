Problem : Game between friends

Input :
#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a>=b){
	        b+=c;
	        if(a>=b){
	            b+=d;
	            if(a>=b){
	                cout<<"N\n";
	            }else{
	                cout<<"S\n";
	            }
	        }else{
	            a+=d;
	            if(a>=b){
	                cout<<"N\n";
	            }else{
	                cout<<"S\n";
	            }
	        }
	    }else{
	        a+=c;
	        if(a>=b){
	            b+=d;
	            if(a>=b){
	                cout<<"N\n";
	            }else{
	                cout<<"S\n";
	            }
	        }else{
	            a+=d;
	            if(a>=b){
	                cout<<"N\n";
	            }else{
	                cout<<"S\n";
	            }
	        }
	    }
	}
}
