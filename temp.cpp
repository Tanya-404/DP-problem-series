#include<iostream>
using namespace std;
#include<vector>
// void func(int i,int *arr, int n)
// {
//     if(i>=n/2)
//     return;
//     swap(arr[i],arr[n-i-1]);
//     cout<<"swapping..."<<arr[i]<<" and "<<arr[n-i-1] <<endl;
//     func(i+1,arr,n);
// }

// bool IsPalindrome(int i,int *arr, int n)
// {
//     if(i>=n/2)
//     return true;
//     if(arr[i]!=arr[n-i-1])
//     return false;
//     cout<<"checking ..."<<arr[i]<<" and "<<arr[n-i-1] <<endl;
//     return IsPalindrome(i+1,arr,n);
// }
void Subseq(int i, int* arr, int n,vector<int> &ans, int target)
{
    if(i==n)
    {
        int sum =0;
        for(auto it : ans){
        sum =sum+it;
        }
        if(sum==target)
        {
            for(auto it: ans)
            {
                cout<< it <<" ";
            }
            cout<<endl;
        }
        return;
    }
    // if(ans.size()==0)
    // {
    //     cout<<"{}";
    // }
    // cout <<endl;
    
    Subseq(i+1,arr,n,ans,target);
    ans.push_back(arr[i]);
    Subseq(i+1,arr,n,ans,target);
    ans.pop_back();
    
    
}
int main(){
    int arr[5] ={3,1,2,2,1};
    vector<int> ans;
    Subseq(0,arr,5,ans,3);
    return 0;
}