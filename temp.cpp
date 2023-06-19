#include<iostream>
using namespace std;
#include<vector>

// bool Subseqsum(int i, int* arr, int n,vector<int> &ans,int s, int sum)
// {
//     if(i==n)
//     {
//         if(s==sum)
//         {
//             for(auto it: ans) cout<< it <<" ";
//             // cout<<endl;
//             return true;
//         }
//         return false;
//     }
//     ans.push_back(arr[i]);
//     s+=arr[i];
//     if (Subseqsum(i+1,arr,n,ans,s,sum)==true) return true;
//     s -=arr[i];
//     ans.pop_back();
//     if(Subseqsum(i+1,arr,n,ans,s,sum)==true) return true;
//     return false;
    
    
// }
int Subseqsum(int i, int* arr, int n,int s, int sum)
{
    if(i==n)
    {
        if(s==sum) return 1;
        return false;
    }
    // ans.push_back(arr[i]);
    s+=arr[i];
    int l =Subseqsum(i+1,arr,n,s,sum);
    s -=arr[i];
    // ans.pop_back();
    int r= Subseqsum(i+1,arr,n,s,sum);
    return l+r;
    
    
}
// void Subseq(int i, int* arr, int n,vector<int> &ans)
// {
//     if(i==n)
//     {
//         for(auto it: ans)
//         {
//             cout<< it <<" ";
//         }
//         if(ans.size()==0)
//         {
//             cout<<"{}";
//         }
//         cout<<endl;
        
//         return;
//     }
    
//     ans.push_back(arr[i]);
//     Subseq(i+1,arr,n,ans);
//     ans.pop_back();
//     Subseq(i+1,arr,n,ans);
   
    
    
// }
int main(){
    int arr[] ={1,2,1};
    int n=3;
    // vector<int> ans;
    int sum=2;
    cout<< Subseqsum(0,arr,n,0,sum);
    return 0;
}
// int main(){
//     int arr[] ={3,1,2};
//     int n=3;
//     vector<int> ans;
//     int sum=2;
//     Subseq(0,arr,n,ans);
//     return 0;
// }