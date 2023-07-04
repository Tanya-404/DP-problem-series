/*Juggler Sequence is a series of integers in which the first term starts with a positive integer number a and 
the remaining terms are generated from the immediate previous term using the below recurrence relation:
A(k+1) =A(k) to the pow(1/2) for even A(k)
        A(k) to the pow(3/2) for odd A(k)*/
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
vector<int> ans;

vector<int> jugglerSequence(int N)
{
    ans.push_back(N);
    if(N==1) return ans;
    if(N%2 == 0)
    {
        int value = pow(N,0.5);
        return jugglerSequence(value);
    }
    else
    {
        int value =pow(N,1.5);
        return jugglerSequence(value);
    }
}
int main(){
    int n;
    cin >>n;
    jugglerSequence(n);
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    return 0;
}