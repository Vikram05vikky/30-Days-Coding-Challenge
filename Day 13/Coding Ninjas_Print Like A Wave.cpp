Problem :
For a given 2-dimension integer array/list 'ARR' of size n x m. Print the 'ARR' in a sine wave order, print the first column top to bottom, next column bottom to top and so on.

Input:

#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;

    for(int j=0;j<mCols;j++)
    {
        if(j & 1)
        {
            for(int i=nRows-1;i>=0;i--)
            {
                ans.push_back(arr[i][j]);
            }
        }
        else
        {
            for(int i=0;i<nRows;i++)
            {
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;

}
