/*The n-queens puzzle is the problem of placing n queens on a (n×n) chessboard such that no two queens can attack each other.
Given an integer n, find all distinct solutions to the n-queens puzzle. Each solution contains distinct board configurations 
of the n-queens’ placement, where the solutions are a permutation of [1,2,3..n] in increasing order, here the number in the ith
 place denotes that the ith-column queen is placed in the row with that number. For eg below figure represents a chessboard 
 [3 1 4 2].*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void print(vector<vector<int>> res)
    {
        for(int i=0;i<res.size();i++)
        {
            for(int j=0;j<res[i].size();j++) cout<< res[i][j] <<" ";
            cout << endl;
        }
    }
bool isSafe(vector<vector<int>> board,int row, int col)
{
    for(int i=row-1, j=col; i>=0 ;i--)
    {
        if(board[i][j]==1) return false;
    }
    for(int i=row-1, j=col-1; i>=0 && j>=0 ;i--,j--)
    {
        if(board[i][j]==1) return false;
    }
    for(int i=row-1, j=col+1; i>=0 && j<board.size() ;i--,j++)
    {
        if(board[i][j]==1) return false;
    }
    return true;
    
}
void sol(vector<vector<int>> board,int row,int n,vector<int> res)
{
    if(row==n) 
    {
        ans.push_back(res);
        return;
    }
    for(int col=0; col<n; col++)
    {
        
        if(isSafe(board, row,col))
        {
            res.push_back(col+1);
            board[row][col] =1;
            sol(board, row+1,n,res);
            board[row][col] =0;
            res.pop_back();
        }
    }
    
}

int main(){
    int n;
    cin >> n;
    vector<int> res;
    vector<vector<int>> board(n,vector<int> (n));
    sol(board,0,n,res);
    print(ans);
    
    return 0;
}