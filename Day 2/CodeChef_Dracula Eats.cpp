Problem : Dracula Eats

There are N spooky days left until Halloween.
Dracula dines at a mysterious restaurant that changes its spooky menu daily. He particularly enjoys what they serve on Tuesday.

Today is Monday, so he wishes to calculate how many times he can indulge in his favourite menu in the next N days (including today) before Halloween.

Input:

#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--)
	{
	    int n;
	    cin>>n;
	    
	    int i=2;
	    int count=0;
	    while(i<=n)
	    {
	        count++;
	        i+=7;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
