/*Given an integer array nums that may contain duplicates, return all possible 
subsets(the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.*/

#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
void print(vector<vector<int>> res)
{
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++) cout<< res[i][j] <<" ";
        cout << endl;
    }
}
void subset(int index,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans){
    ans.push_back(ds);
    for(int i=index;i<nums.size();i++){
        if(i!=index && nums[i]==nums[i-1]) continue;
        ds.push_back(nums[i]);
        subset(i+1,nums,ds,ans);
        ds.pop_back();
    }
}

int main(){
    vector<int> nums ={1,2,2};
    vector<vector<int>> ans;
    vector<int> res;
    sort(nums.begin(),nums.end());
    subset(0,nums,res,ans);
    print(ans);
    
    return 0;
}