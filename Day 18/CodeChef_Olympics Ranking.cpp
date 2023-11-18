Problem : Olympics Ranking

Input :
#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d,e,f;
	    int sum1=0;
	    int sum2=0;
	    cin>>a>>b>>c>>d>>e>>f;
	    
	    sum1=a+b+c;
	    sum2=d+e+f;
	  
	    if(sum1>sum2)
	        cout<<"1"<<endl;
	   else
	    cout<<"2"<<endl;
	}
	return 0;
}
