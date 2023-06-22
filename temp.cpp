#include<iostream>
using namespace std;
#include<vector>
#include<string>

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

// int Subseqsum(int i, int* arr, int n,int s, int sum)
// {
//     if(i==n)
//     {
//         if(s==sum) return 1;
//         return false;
//     }
//     // ans.push_back(arr[i]);
//     s+=arr[i];
//     int l =Subseqsum(i+1,arr,n,s,sum);
//     s -=arr[i];
//     // ans.pop_back();
//     int r= Subseqsum(i+1,arr,n,s,sum);
//     return l+r;
    
    
// }

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

bool Subseq(int i,string t,int n,string ans,string s)
{
    if(i==n)
    {
        if(ans == s) return true;
        return false;
        // for(auto it: ans)
        // {
        //     cout<< it <<" ";
        // }
        // if(ans.size()==0)
        // {
        //     cout<<"{}";
        // }
        // cout<<endl;
        
        // return;
    }
    // if(ans == s) return true;

      
    ans.push_back(t[i]);
    if (Subseq(i+1,t,n,ans,s)) return true;
    ans.pop_back();
    if (Subseq(i+1,t,n,ans,s)) return true;  
    return false;
}
// bool issub(string s, string t)
// {   
//     bool ans = false;
//     int count =0;
//     int j =0;
//     for(int i=0 ; i< s.length();i++)
//     {
//         // j+=1;
//         int temp =s[i];
//         while(j<=t.length())
//         {
//             if(t[j]==temp) {
//                 j+=1;
//                 count++;
//                 break;
//             }
//             j++;
//         }
//         cout << j <<" -> " <<count << " " << endl;
//         if(j>t.length() && count!=s.length()) return false;
//     }
    
//     return true;
// }
int main(){
    // int arr[] ={1,2,1};
    // int n=3;
    // int sum=2;
    
    // cout<< Subseqsum(0,arr,n,0,sum);
    string  s = "axc", t = "ahbgdc";
    string ans ="";
    int n =t.length();
    cout<< Subseq(0,t,n,ans,s);
    // cout << issub(s,t);
}
// int main(){
//     int arr[] ={3,1,2};
//     int n=3;
//     vector<int> ans;
//     int sum=2;
//     Subseq(0,arr,n,ans);
//     return 0;
// }