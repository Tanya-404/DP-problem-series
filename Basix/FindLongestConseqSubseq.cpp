#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& nums) {
    int n=nums.size();
    if(n==0) return 0;
    int longest =1;
    unordered_set<int> s;
    for(int i=0; i<n;i++) s.insert(nums[i]);
    for(auto it: s)
    {
        if(s.find(it-1) == s.end())
        {
            int cnt=1;
            int x=it;
            while(s.find(x+1) !=s.end())
            {
                x=x+1;
                cnt++;
            }
            longest = max(longest,cnt);
        }
    }
    return longest;    
}

int main(){
    vector<int> nums ={1,2,4,1,3,5,6,8,9};
    cout << longestConsecutive(nums) ;
    
    return 0;
}