#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<vector>
int n=8;
// int* findalloccur(int* arr, int index,int key, int fsf) //version is not supporting dynamic memory allocations
// {
//     if(index == n) return new int[fsf];
//     if(arr[index] == key)
//     {
//         int[] iarr =findalloccur(arr, index+1,key, fsf+1) ;
//         iarr[fsf] = index;
//         return iarr;
//     }
//     else
//     {
//         int[] iarr findalloccur(arr, index+1,key, fsf);
//         return iarr;
//     }
    
// }
void print(vector<int> ans)
{
    for(int i=0; i<ans.size();i++)cout << ans[i] << " ";
    cout << endl;
}
vector<int> findalloccur(int* arr, int index, vector<int> &ans,int key)
{
    if(index == n)
    {
        if(ans.size()==0) ans.push_back(-1);
        return ans;
    }
    if(arr[index] == key) ans.push_back(index);
    return findalloccur(arr, index+1, ans,key);
}
int main(){
    int arr[8] ={1,2,3,4,2,3,5,3};
    vector<int> ans;
    findalloccur(arr,0,ans,3);
    print(ans);
    return 0;
}