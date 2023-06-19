#include <iostream>
using namespace std;
void OpBubbleSort(int arr[])
{
    int i, j;
    int rounds = 0;
    for (i = 0; i < 5; i++)
    {
        rounds++;
        int flag = false;
        for (j = 0; j < 5 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = true;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (flag == false)
        {
            break;
        }
    }
    cout <<endl<< "No of rounds : " << rounds;
}
// void BubbleSort(int arr[])
// {
//     int i,j;
//     for(i=0;i<5;i++)
//     {
//         for(j=0;j<5-i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//             int temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//             }
//         }
//     }
// }
// void Subseqsum(int i, int* arr, int n,vector<int> &ans, int target)
// {
//     if(i==n)
//     {
//         int sum =0;
//         for(auto it : ans){
//         sum =sum+it;
//         }
//         if(sum==target)
//         {
//             for(auto it: ans)
//             {
//                 cout<< it <<" ";
//             }
//             cout<<endl;
//         }
//         return;
//     }
//     // if(ans.size()==0)
//     // {
//     //     cout<<"{}";
//     // }
//     // cout <<endl;
    
//     Subseq(i+1,arr,n,ans,target);
//     ans.push_back(arr[i]);
//     Subseq(i+1,arr,n,ans,target);
//     ans.pop_back();
    
    
// }
// void func(int i,int *arr, int n)
// {
//     if(i>=n/2)
//     return;
//     swap(arr[i],arr[n-i-1]);
//     cout<<"swapping..."<<arr[i]<<" and "<<arr[n-i-1] <<endl;
//     func(i+1,arr,n);
// }

// bool IsPalindrome(int i,int *arr, int n)
// {
//     if(i>=n/2)
//     return true;
//     if(arr[i]!=arr[n-i-1])
//     return false;
//     cout<<"checking ..."<<arr[i]<<" and "<<arr[n-i-1] <<endl;
//     return IsPalindrome(i+1,arr,n);
// }

int main()
{

    int myarr[5];
    cout << "Enter 5 integers in any order" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> myarr[i];
        /* code */
    }

    cout << "Before sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << " ";
        /* code */
    }

    OpBubbleSort(myarr);
    cout << endl;

    cout << "Afer sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << " ";
        /* code */
    }

    return 0;
}