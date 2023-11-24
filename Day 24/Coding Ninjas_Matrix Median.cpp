Problem : Matrix Median

Input:

#include<bits/stdc++.h>
int getMedian(vector<vector<int>> &matrix)
{
    vector<int> res;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            res.push_back(matrixa[i][j]);
        }
    }

    sort(res.begin(),res.end());

    return res[res.size()/2];
}
