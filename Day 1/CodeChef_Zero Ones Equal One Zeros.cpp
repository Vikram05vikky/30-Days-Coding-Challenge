Problem : Zero Ones Equal One Zeros
Kulyash believes in equality.Given an integer N, output a binary string of length N such that:
The count of 01 subsequences in the string is equal to the count of  10 subsequences
The string has at least one occurrence of 0 as well as 1
    
If multiple such strings exist, print any. Also, it is guaranteed that corresponding to the given input, an answer always exists.

Input Format
First line will contain 
T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, an integer N - the length of the binary string.

Output Format
For each test case, output any binary string of length N satisfying the given conditions.

Input:

#include<iostream>
using namespace std;

void sol(int n)
{
    for(int i=0;i<n;i++)
    {
        if(i==0 || i==n-1)
            cout<<"1";
        else
            cout<<"0";
    }
    cout<<endl;
}

int main()
{
    int a;
    cin>>a;
    
    while(a--)
    {
        int n;
        cin>>n;
        sol(n);
    }
}
