#include<iostream>
using namespace std;
int n=5;
int MaxArr(int *arr, int index)
{
    if(index ==n-1) return arr[n-1] ;
    int maxi = MaxArr(arr, index+1);
    if(maxi>arr[index]) return maxi;
    else return arr[index];

}

int main(){
    int arr[5] = {4,21,56,74,22};
    cout << MaxArr(arr, 0);
    return 0;
}