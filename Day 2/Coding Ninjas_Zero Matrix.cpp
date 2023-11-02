Problem : Zero Matrix

You are given a matrix of dimension 'N' x 'M'. Your task is to make all the elements of row 'i' and column 'j' equal to 0 if 
any element in the ith row or jth column of the matrix is 0.

Input:

#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	int col=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(matrix[i][j]==0)
            {
                matrix [i] [0] =0;
                if(j!=0)
                {
                    matrix[0][j]=0;
                }
                else
                {
                    col =0;
                }
            }
        }
    }
        for(int i=1;i<n;i++)
        {
            for(int j=1; j<m; j++)
            {
                if(matrix[i][j] !=0)
                {
                    if(matrix[0][j]==0|| matrix[i][0]==0)
                    {
                        matrix[i][j] =0;
                    }
                }
            }
        }
            if(matrix[0][0]==0)
            {
                for(int j=0; j<m; j++)
                {
                    matrix[0][j]=0;
                }
            }
            if(col==0)
            {
                for(int i =0; i<n; i++)
                {
                   matrix[i][0]=0;
                }
            }
    return matrix;
}
