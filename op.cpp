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