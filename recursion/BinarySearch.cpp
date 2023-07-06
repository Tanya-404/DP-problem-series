#include<iostream>
using namespace std;
int Bsearch(int* arr, int s, int e, int target)
{
    if(s>e) return -1;
    int mid = s+(e-s)/2;
    if(arr[mid] == target) return mid;
    if(arr[mid]>target) return Bsearch(arr, s, mid-1,target);
    else return Bsearch(arr, mid+1,e, target);
}
int main(){
    int arr[7]= {1,25,17,5,4,6,9};
    int n =7;
    int target ;
    cout << "Enter the element you want to search " ;
    cin >> target;
    int ans = Bsearch(arr, 0, n-1, target);
    if(ans!=-1) cout << "Element is present at index " << ans;
    else cout << "Element not found :(";
    return 0;
}