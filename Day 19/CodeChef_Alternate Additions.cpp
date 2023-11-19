Problem
Chef has 2 numbers A and B (A<B).Chef will perform some operations on A.
In the i th operation:Chef will add 1to A if i is odd.
Chef will add 2 to A if i is even.
Chef can stop at any instant. Can Chef make A equal to B?

Input:

#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    
    while(t--){
        int a, b;
        cin>>a>>b;
       
        cout<<(((b-a)%3 == 2) ? "NO" : "YES")<<endl;
    }
	return 0;
}
