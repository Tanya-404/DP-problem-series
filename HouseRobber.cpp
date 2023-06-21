/*You are a professional robber planning to rob houses along a street. 
Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. 
That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system 
connected, and it will automatically contact the police if two adjacent houses were broken into on the same night.
Given an integer array nums representing the amount of money of each house, return the maximum amount of
 money you can rob tonight without alerting the polic*/
#include<iostream>
using namespace std;
int rob(int *nums, int n) {
        if(n==1) return nums[0];
        int prev1 =nums[0];
        int prev2 =0;
        int prev3 = nums[1];
        int prev4 = 0;
        for(int i=1; i<n-1 ;i++)
        {
            int incl = prev2 +nums[i];
            int excl = prev1 +0;
            int curr = max(incl,excl);
            prev2 = prev1;
            prev1 = curr;
        }
        for(int i=2; i<n ;i++)
        {
            int incl = prev4 +nums[i];
            int excl = prev3 +0;
            int curr = max(incl,excl);
            prev4 = prev3;
            prev3 = curr;
        }
        return max(prev1, prev3);

    }

int main(){
    int nums[] = {2,3,2};
    int n= 3;
    cout << rob(nums, n);
    
    return 0;
}