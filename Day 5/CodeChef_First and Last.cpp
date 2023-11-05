Problem : First and Last

You are given an array of length n. You can right rotate it any number of times. What is the maximum value of A1+An you can get?

Input:

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
        
        int sum=a[0]+a[n-1];
        
	     for(int i=0;i<n-1;i++)
	    {
	        int temp=a[i]+a[i+1];
	        
	        sum=max(sum,temp);
	    }
	    
	    cout << sum <<endl;
	}
	return 0;
}
