Problem : Allocate Books

Input:
#include <bits/stdc++.h> 

long long ayushGivesNinjatest(int n, int m, vector<int> time) 

{   
    if(n>m)

    {

        return -1;

    }

    long long int ans =0;

    long long int mid;

    long long int start = 0;

    long long int end = 0;

    for(int i=0; i<time.size(); i++)

    {

        // start = max(start,time[i]);

        if(start<time[i])

        {

            start = time[i];

        }

        end = end + time[i];

    }

    while(start<=end)

    {

        mid = start + (end - start)/2;

        int day = 1;

        long long int chapters = 0;

        for(int i=0; i<time.size(); i++)

        {

            chapters += time[i];

            if(chapters > mid)

            {

                day++;

                chapters = time[i];

            }

        }

        if(day <= n)

        {

            ans = mid;

            end = mid - 1;

        }

        else

        {

            start = mid + 1;

        }

    }

    return ans;

}

