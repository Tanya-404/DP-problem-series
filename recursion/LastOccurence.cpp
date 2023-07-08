#include<iostream>
using namespace std;
int n=8;
int LastOccur(int *arr, int index,int key)
{
    if(index==-1) return -1;
    if(arr[index] == key) return index;
    else return LastOccur(arr, index-1,key);
    
}
int main(){
    int arr[8] = {1,2,3,5,3,2,5,6};
    cout << LastOccur(arr,n-1,5);
    return 0;
}