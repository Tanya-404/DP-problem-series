#include<iostream>
using namespace std;
int MaxConsqOnes(int* arr, int n)
{
    int cnt =0;
    int maxi =0;
    for(int i=0; i<n;i++)
    {
        if(arr[i]==0) 
        {
            cnt =0;
            continue;
        }
        cnt++;
        if(cnt>maxi) maxi =cnt;
        
    }
    return maxi;
}

int main(){
    int arr[9] = {0,1,1,1,0,1,1,1,1};
    cout << MaxConsqOnes(arr,9);
    return 0;
}