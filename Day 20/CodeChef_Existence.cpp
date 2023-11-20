Problem : Existence

Input:
#include <iostream>
using namespace std;

int main() {
	 int t;  
	 cin>>t;
     while(t--)
     {
        long long x,y;  
        cin>>x>>y;
        if((x*x-2*y)==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
         
    }
    return 0;
}
