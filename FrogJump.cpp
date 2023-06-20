#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
#include<vector>
int frogJump(int n, int *heights)
{
    int prev =0;
    int prev2 = 0;
    for(int i=1;i<n;i++)
    {
        int first = prev + abs(heights[i]-heights[i-1]);
        int second=INT_MAX;
        if(i>1) second = prev2 + abs(heights[i]-heights[i-2]);
        int curr =min(first,second);
        prev2= prev;
        prev = curr;
    }
    return prev;
}

int main(){
    int heights[]={7, 4 ,4, 2, 6, 6 ,3, 4 };
    int n=8;
    cout << frogJump(n,heights);
    return 0;
}