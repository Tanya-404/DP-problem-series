#include<iostream>
using namespace std;
int n=8;
int FirstOccur(int *arr, int index,int key)
{
    if(index==n) return -1;
    if(arr[index]==key) return index;
    else return FirstOccur(arr, index+1,key);
}
int main(){
    int arr[8] = {1,2,3,5,3,2,5,6};
    cout << FirstOccur(arr, 0,5);
    return 0;
}