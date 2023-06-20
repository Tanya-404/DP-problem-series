// Given an array Arr of size N containing positive integers. 
// Find the maximum sum of a subsequence such that no two numbers in the sequence should be adjacent in the array.
#include<iostream>
using namespace std;
#include<vector>
int findMaxSum(int *arr, int n) {
	    // int dp[n] ={0};
        int prev1= arr[0];
        int prev2 = 0;
        // cout << n << endl;
        for(int i=1; i<n; i++)
        {
            int incl = prev2 + arr[i];
            int excl = prev1 + 0;
            int curr = max(incl, excl);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
	    // code here
	}
int main(){
   int  n = 6;
   int arr[] = {5, 5, 10, 100, 10, 5};
   cout << findMaxSum(arr , n);
    return 0;
}