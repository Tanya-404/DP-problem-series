#include<iostream>
using namespace std;
void Print(int* arr, int n)
{
    for(int i=0; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
}
void Bsort(int* arr, int n)
{
    if(n==0 || n==1) return;
    for(int i=0 ;i <n-1;i++)
    {
        if(arr[i]> arr[i+1]) swap(arr[i],arr[i+1]);
    }
    Bsort(arr, n-1);
}
int main(){
    int arr[6] = {1,5,2,6,4,3};
    int n =6;
    Bsort(arr, n);
    Print(arr, n);
    return 0;
}