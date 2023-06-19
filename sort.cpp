#include<iostream>
using namespace std;
#include<vector>
// void Merge(int* arr, int low,int mid, int high)
// {
//     vector<int> ans;
//     int left =low;
//     int right =mid+1;
//     while(left<=mid && right<=high)
//     {
//         if(arr[left]<arr[right])
//         {
//             ans.push_back(arr[left++]);
//         }
//         else
//         {
//             ans.push_back(arr[right++]);
//         }
//     }
//     while(left<=mid)
//     {
//         ans.push_back(arr[left++]);
//     }
//     while(right<=high)
//     {
//         ans.push_back(arr[right++]);
//     }
//     for(int i=low; i<=high;i++)
//     {
//         arr[i]=ans[i-low];
//     }
// }
// void MergeSort(int* arr, int low,int high)
// {
//     if(low>=high) return;
//     int mid =(low +high)/2;
//     MergeSort(arr,low,mid);
//     MergeSort(arr,mid+1,high);
//     Merge(arr,low,mid,high);
// }
int Partition(int *arr, int low, int high)
{
    int i=low;
    int pivot =arr[low];
    int j= high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<=high-1)
        {
            i++;
        }
        while(arr[j]>pivot && j>=low+1)
        {
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;

}
void QuickSort(int *arr,int low, int high)
{
    if(low<high) 
    {int pIndex = Partition(arr, low, high);
    QuickSort(arr,low,pIndex-1);
    QuickSort(arr,pIndex+1,high);
}
}

int main(){
    int arr[]= {2,3,1,4,5,7,8};
    // MergeSort(arr,0,6);
    QuickSort(arr,0,6);
    for(int i=0;i<=6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}