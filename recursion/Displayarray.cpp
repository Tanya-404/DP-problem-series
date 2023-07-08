#include<iostream>
using namespace std;
void Display(int* arr, int& index)
{
    if(index==0) 
    {
        cout << arr[index] <<" ";
        index+=1;
        return;
    }
    index = index-1;
    Display(arr, index);
    cout << arr[index] <<" ";
    index = index+1;
}
void DisplayRev(int* arr, int& index)
{
    cout << arr[index] <<" ";
    if(index==0) return;
    index = index-1;
    DisplayRev(arr, index);
}
int main(){
    int arr[8]={1,3,4,2,5,6,7,0};
    int i = 7; //take two different variables for index bcz we're passing value by reference in both functions
    int j=7;
    Display(arr,i);
    cout << endl;
    DisplayRev(arr,j);
    return 0;
}