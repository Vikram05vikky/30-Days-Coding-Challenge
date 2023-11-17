Problem
You are given a binary string S of length N. You are allowed to perform the following types of operations on string S:
Delete any one character from S, and concatenate the remaining parts of the string. For example, if we delete the third character of S=1101, it becomes S=111.
Flip all the characters of S. For example, if we flip all character of S=1101, it becomes S=0010.

Input:

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
	cin>>t;
// 	int count=0;
	while(t--)
	{
	    int n,z;
	    cin>>n;
	    string sr;
	    cin>>sr;
	    z = count(sr.begin(),sr.end(),'0');
	    cout<<((z<(n-z))?(z+1):(n-z))<<"\n";
	}
	return 0;
}
