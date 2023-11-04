Problem : Red Light, Green Light

“You won’t get caught if you hide behind someone.” Sang-Woo advises Gi-Hun to hide behind someone to avoid getting shot.
Gi-Hun follows Sang-Woo's advice and hides behind Ali, who saved his life earlier. Gi-Hun and Ali both have the same height, K. Many players saw this trick and also started hiding behind Ali.
Now, there are N players standing between Gi-Hun and Ali in a straight line, with the ith player having height H. Gi-Hun wants to know the minimum number of players who need to get shot so that Ali is visible in his line of sight.

Input :

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    
	    int arr[a];
	    
	    for(int i=0;i<a;i++)
	        cin>>arr[i];
	        
	    int cnt=0;
	    for(int i=0;i<a;i++)
	    {
	        if(arr[i] > b)
	            cnt++;
	    }
	    
	    cout<<cnt<<endl;
	}
	return 0;
}
