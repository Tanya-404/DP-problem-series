#include<iostream>
using namespace std;
#include<vector>
#include <bits/stdc++.h> 
// void print(vector<vector<int>> &vtr )
// {
//     for ( int i = 0 ; i < vtr.size(); i++ )
//     {
//     for ( int j = 0; j < vtr[i].size() ; j++ )
//     cout << vtr[i][j] << " " ;
//     cout << endl ;
//     }
// }
int NinjaTrainTabOpt(int n, vector<vector<int>> &points)
{
    vector<int> prev(4,0);
    prev[0] =max(points[0][1],points[0][2]);
    prev[1] =max(points[0][0],points[0][2]);
    prev[2] =max(points[0][0],points[0][1]);
    prev[3] =max(points[0][0],max(points[0][1],points[0][2]));
    for(int day =1;day<n;day++)
    {
        vector<int> temp(4,0);
        for(int last=0; last<4;last++)
        {
            temp[last] = 0;
            for(int task =0; task<3; task++)
            {
                if(task!=last)
                {   
                    temp[last] = max(temp[last],points[day][task] + prev[task]);
                }
            }
        }
        prev = temp;
    }
    return prev[3];

}


// int NinjaTrainTab(int n, vector<vector<int>> &points)
// {
//     vector<vector<int>> dp(n,vector<int>(4,0));
//     dp[0][0] =max(points[0][1],points[0][2]);
//     dp[0][1] =max(points[0][0],points[0][2]);
//     dp[0][2] =max(points[0][0],points[0][1]);
//     dp[0][3] =max(points[0][0],max(points[0][1],points[0][2]));
//     for(int day =1;day<n;day++)
//     {
//         for(int last=0; last<4;last++)
//         {
//             dp[day][last] = 0;
//             // int maxi =0;
//             for(int task =0; task<3; task++)
//             {
//                 if(task!=last)
//                 {   
//                     int point = points[day][task] + dp[day-1][task];
//                     dp[day][last] = max(dp[day][last],point);
//                 }
//             }
//         }
//     }
//     print(dp);
//     cout << endl;
//     return dp[n-1][3];

// }


// int NinjaTrainMem(int day, int last,vector<vector<int>> &points,vector<vector<int>> &dp)
// {
//     if(day==0)
//     {
//         int maxi = 0;
//         for(int task=0; task <3; task++)
//         {
//             if(task!=last)
//             {
//                 maxi = max(maxi, points[0][task]);
//             }
//         }
//         return maxi;
//     }
//     if(dp[day][last]!=-1) return dp[day][last];
//     int maxi = 0;
//     for(int task =0; task<3 ; task++)
//     {
//         if(task !=last)
//         {
//             int point = points[day][task]+NinjaTrainMem(day-1,task,points,dp);
//             maxi = max(maxi,point);
//         }
        
//     }
    
//     return dp[day][last] = maxi;
// }


int main(){
    int days = 3;
    vector<vector<int>> dp(days,vector<int>(4,-1));
    vector<vector<int>> points ={{1 ,2, 5 },{3 ,1 ,1},{3 ,3, 3}};
    // cout << NinjaTrainMem(days-1,3,points,dp ) <<endl;
    // cout << NinjaTrainTab(days, points)<< endl;
    cout << NinjaTrainTabOpt(days, points)<< endl;
    // print(dp);
    // print(points);
    return 0;
}