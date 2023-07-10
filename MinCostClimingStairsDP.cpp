/*You are given an integer array cost where cost[i] is the cost of ith step on a staircase. 
Once you pay the cost, you can either climb one or two steps.You can either start from the step with index 0, or the step with index 1.
Return the minimum cost to reach the top of the floor.*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int MinCost(int* arr,int n,vector<int> &dp)
{
    if(n==0 || n==1) return arr[n];
    if(n<0) return 0;
    if(dp[n]!=0) return dp[n];
    else return dp[n] =arr[n] + min(MinCost(arr,n-1,dp), MinCost(arr,n-2,dp));

}

int main(){
    int arr[3] ={10,15,20};
    int n=3;
    vector<int> dp(n,0);
    int ans = MinCost(arr, n-1,dp);
    int ans2 = MinCost(arr,n-2,dp);
    cout<< min(ans,ans2);
    return 0;
}