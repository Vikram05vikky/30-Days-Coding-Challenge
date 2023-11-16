Problem : Flower Shop

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Write your code here
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);

    vector<int> flow;

    flow.push_back(arr[0]);

    for(int i=0;i<n;i++)
    {
        if(arr[i]>=flow[flow.size()-1] && arr[i] <= flow[flow.size()-1]+4)
            continue;
        else
            flow.push_back(arr[i]);
    }

    cout<<flow.size();
    return 0;
}
