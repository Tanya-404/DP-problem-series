#include<iostream>
using namespace std;
void PrintDecreasingIncreasing(int n)
{
    if(n==0) return;
    cout << n <<" ";
    PrintDecreasingIncreasing(n-1);
    cout << n <<" ";
}
int main(){
    PrintDecreasingIncreasing(5);
    return 0;
}