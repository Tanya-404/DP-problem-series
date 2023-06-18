// reverse the array
#include<iostream>
using namespace std;
void reverse(int arr[],int size)
{
    int start = 0;
    int end = size-1;
    while(start<=end)
    {
        
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void swapalter(int arr[],int size)
{
    int start = 0;
    while(start+1<size)
    {
        if(start+1<size)
        {
            swap(arr[start],arr[start+1]);
        }
        
        start+=2;
    }
}

int main(){
    int arr[100];
    int size;
    cin >> size;
    for(int i =0; i<size; i++)
    {
        cin >> arr[i];
    }
    // reverse(arr,size);
    
    // for(int i =0; i<size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << endl;
    swapalter(arr,size);
    for(int i =0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
// 1207,420