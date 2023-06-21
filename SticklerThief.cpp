/*Stickler the thief wants to loot money from a society having n houses in a single line. 
He is a weird person and follows a certain rule when looting the houses. According to the rule,
he will never loot two consecutive houses. At the same time, he wants to maximize the amount he loots. 
The thief knows which house has what amount of money but is unable to come up with an optimal looting strategy.
He asks for your help to find the maximum money he can get if he strictly follows the rule. 
Each house has a[i]amount of money present in it.*/

#include <bits/stdc++.h>
using namespace std;
int FindMaxSum(int arr[], int n)
{
    vector<int> dp(n);
    if(n<0) return 0;
    if(n==0) return arr[0];
    dp[0]=arr[0];
    for(int i=1;i <n;i++)
    {
        int incl = arr[i]; 
        if(i>1) incl =dp[i-2] +arr[i];
        int excl = dp[i-1] + 0;
        int curr = max(incl, excl);
        dp[i] = curr;
    }
    return dp[n-1];
}

int main()
{
    int n = 6;
    int a[] = {5,5,10,100,10,5};

	cout << FindMaxSum(a,n) << endl;
	
	return 0;
}

// } Driver Code Ends