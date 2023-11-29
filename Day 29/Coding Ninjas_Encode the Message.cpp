Problem : Encode the Message

Input :
#include <bits/stdc++.h> 
string encode(string &message)
{
    int n=message.size();

    string str;
    int count=1;

    for(int i=0;i<n;i++)
    {
        if(message[i]==message[i+1])
        {
            count++;
            continue;
        }

        str+=message[i];
        str+=to_string(count);
        count=1;
    }
    return str;
}
