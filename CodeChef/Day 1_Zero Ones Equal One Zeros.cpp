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
