/*Given an infinite supply of each denomination of Indian currency { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 } 
and a target value N. Find the minimum number of coins and/or notes needed to make the change for Rs N. 
You must return the list containing the value of coins required. */
#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
#include<vector>
void Solution(int arr[], int target,int n)
{   
    vector<int> ans;
    int i=n-1;
    while(i>=0 && target>0){
        if(target>=arr[i])
        {
            int times = target/arr[i];
            target = target-times * arr[i];
            while(times--)
            {
                ans.push_back(arr[i]);
            }
            
        }
        i--;
    }
    for(int j=0 ; j<ans.size();j++)
    {
        cout << ans[j] <<" ";
    }
    
}

int main(){
    int V =43 , M = 10, coins[] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
    Solution(coins, V, M);
    return 0;
}