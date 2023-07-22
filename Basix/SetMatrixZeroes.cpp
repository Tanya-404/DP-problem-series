/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> &matrix)
{
    for(int i=0; i<matrix.size(); i++)
    {
        for(int j=0; j<matrix[0].size();j++)cout<<matrix[i][j] <<" ";
        cout <<endl;
    }
}

void setZeroes(vector<vector<int>>& matrix) {
    int rows= matrix.size();
    int cols = matrix[0].size();
    int r[201] = {0};
    int c[201]={0};
    for(int i=0; i<rows; i++)
    {
        for(int j=0 ;j<cols; j++)
        {
            if(matrix[i][j]==0)
            {
                r[i] =1;
                c[j] =1;
            }
        }
    }
    for(int i=0; i<rows; i++)
    {        
        for(int j=0 ;j<cols; j++)
        {
            if(r[i]==1 || c[j]==1) matrix[i][j] =0;
        }
    } 
}

int main(){
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    print(matrix);
    setZeroes(matrix);
    cout <<endl; 
    print(matrix);
    
    return 0;
}