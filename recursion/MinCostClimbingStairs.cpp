#include<iostream>
using namespace std;
int MinCost(int *arr,int n)
{
    if(n==0 || n==1) return arr[n];
    else if(n<0) return 0;
    else return arr[n] + min(MinCost(arr,n-1), MinCost(arr,n-2));

}

int main(){
    int arr[3] ={10,15,20};
    int ans = MinCost(arr, 2);
    int ans2 = MinCost(arr,1);
    cout << min(ans,ans2);
    return 0;
}