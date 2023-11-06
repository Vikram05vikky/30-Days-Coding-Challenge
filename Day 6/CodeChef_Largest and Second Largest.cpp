Problem :  Largest and Second Largest
You are given an array A of N integers.
Find the maximum sum of two distinct integers in the array.

Note: It is guaranteed that there exist at least two distinct integers in the array.

Input :

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) 
	        cin>>a[i];
	        
	    sort(a,a+n);
	    
	    for(int i=n-1;i>=0;i--)
	    {
	     if(a[i] != a[i-1])
	     {
	         cout<<a[i] + a[i-1]<<endl; 
	         break;
	     }  
	    }
	}
	return 0;
}
