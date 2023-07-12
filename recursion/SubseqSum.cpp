#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> res;
vector<int> ans;
void print(vector<vector<int>> res)
{
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++) cout<< res[i][j] <<" ";
        cout << endl;
    }
}
void getSubseqsum(int i, int* arr, int n,vector<int> &ans,int s, int sum)
{
    if(i==n)
    {
        if(s==sum)
        {
            res.push_back(ans);
        }
        return;
    }
    ans.push_back(arr[i]);
    s+=arr[i];
    getSubseqsum(i+1,arr,n,ans,s,sum);
    s -=arr[i];
    ans.pop_back();
    getSubseqsum(i+1,arr,n,ans,s,sum);
    return;
    
    
}

int main(){
    int arr[6] ={10,20,30,50,6,4};
    int target;
    cout << "Enter the target sum - ";
    cin >> target;
    getSubseqsum(0,arr,6,ans,0,target);
    if(res.size()==0) cout << "Not enough elements to form target sum :(" ;
    print(res);
    return 0;
}