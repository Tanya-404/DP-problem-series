#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<int> arr)
{
    for(int i=0 ; i<arr.size();i++) cout<<arr[i]<< " ";
}
vector<int> moveZeroes(vector<int> &a,int n)
{
    int j=-1;
    for(int i=0; i<n;i++)
    {
        if(a[i]==0)
        {
            j=i;
            break;
        }
    }
    if(j==-1) return a;
    for(int i=j+1; i<n;i++)
    {
        if(a[i]!=0)
        {
            swap(a[i],a[j]);
            j++;
        }
    }
    return a;
}
int main(){
    vector<int> nums = {1,2,0,0,3,4,0,5,6,7};
    int n = nums.size();
    moveZeroes(nums,n);
    print(nums);
    return 0;
}