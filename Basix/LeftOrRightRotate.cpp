/*Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.*/
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void print(vector<int> arr)
{
    for(int i=0 ; i<arr.size();i++) cout<<arr[i]<< " ";
}
void LeftRotate(vector<int>& nums, int k)
{
    int n= nums.size();
    k = k%n;
    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k, nums.end());
    reverse(nums.begin(), nums.end());
}
void RightRotate(vector<int>& nums, int k)
{
    int n= nums.size();
    k = k%n;
    reverse(nums.begin(), nums.begin()+n-k);
    reverse(nums.begin()+n-k, nums.end());
    reverse(nums.begin(), nums.end());
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    RightRotate(nums,k);
    // LeftRotate(nums,k);
    print(nums);
    return 0;
}