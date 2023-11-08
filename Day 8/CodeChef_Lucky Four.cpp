Problem - Lucky Four
Karan likes the number 4 very much.

Impressed by the power of this number, Karan has begun to look for occurrences of four anywhere. He has a list of T integers, for each of them he wants to calculate the number of occurrences of the digit 4 in the decimal representation. He is too busy now, so please help him.

Input :
#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	int n;
	for(int i=1;i<=a;i++)
	{
	    int count=0;
	    cin>>n;
	    while(n)
	    {
	    
	    int d=n%10;
	    if(d==4)
	        count++;
	        
	    n=n/10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
