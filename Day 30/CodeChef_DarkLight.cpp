Problem : Dark Light 

Input :
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        int n,k;
        cin>>n>>k;
        
        if(k==0)
        {
            if(n%4 == 0)
                cout<<"off"<<endl;
            else
                cout<<"on"<<endl;
        }
        
        else if(k==1)
        {
            if(n%4 == 0)
                cout<<"on"<<endl;
            else
                cout<<"Ambiguous"<<endl;
        }
    }
	return 0;
}
