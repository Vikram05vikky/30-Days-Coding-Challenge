Problem : Spiral Matrix

Input:
#include <bits/stdc++.h> 

vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m) 

{

    int row=0,col=0,nrow=n-1,ncol=m-1;

    vector<int> ans;

    while(row<=nrow && col<=ncol){

        for(int c=col;c<=ncol;c++){

            ans.push_back(matrix[row][c]);

        }

        row++;

        for(int r=row;r<=nrow;r++){

            ans.push_back(matrix[r][ncol]);

        }

        ncol--;

        if(row<=nrow){

            for(int c=ncol;c>=col;c--){

                ans.push_back(matrix[nrow][c]);

            }

            nrow--;

        }

        if(col<=ncol){

            for(int r=nrow;r>=row;r--){

                ans.push_back(matrix[r][col]);

            }

            col++;

        }

    }

    return ans;

}
