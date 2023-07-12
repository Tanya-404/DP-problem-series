/*Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1).
Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move 
are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot
move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell.*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<string> ans)
{
    for(int i=0; i<ans.size();i++) cout<<ans[i] <<endl;
}
void sol(vector<vector<int>> &m, int row, int col,int n, string op,vector<vector<bool>> visited,vector<string> &ans)
    {
        if(row<0 || col<0 || row>=n || col >= n || m[row][col]==0 || visited[row][col]==true) return;
        if(row==n-1 && col==n-1) 
        {
            ans.push_back(op);
            return;
        }
        visited[row][col]=true;
        sol(m,row-1, col, n, op+'U',visited,ans);
        sol(m,row+1, col, n, op+'D',visited,ans);
        sol(m,row, col-1, n, op+'L',visited,ans);
        sol(m,row, col+1, n, op+'R',visited,ans);
        visited[row][col]=false;
    }

int main(){
    int n=4;
    vector< vector<bool>> visited(n, vector<bool> (n));
    vector<string> ans;
    vector<vector<int>> m = {{1, 0, 0, 0},{1, 1, 0, 1}, {1, 1, 0, 0},{0, 1, 1, 1}};
    string op ="";
    sol(m,0,0, n, op,visited,ans);
    print(ans);
    return 0;
}