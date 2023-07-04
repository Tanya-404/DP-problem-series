/*Make a special series and named it as G.F Series. The series follows this trend  Tn=(Tn-2)2-(Tn-1) 
 in which the first and the second term are 0 and 1 respectively. Help Siddhant to find the first N terms of
the series.*/
#include<iostream>
using namespace std;
long solveSeries(int N)
{
    if(N == 1) return 0;
    if(N == 2) return 1;
    
    long x = solveSeries(N-2);
    long y = solveSeries(N-1);
    
    return ((x*x) - y);
}
    
void gfSeries(int N)
{
    if(N >= 1) cout<<"0";
    if(N >= 2) cout<<" 1";
    
    for(int i = 3; i <= N; i++){
        cout<<" "<<solveSeries(i);
    }
    cout<<endl;
}
int main(){
    int n;
    cin >> n;
    gfSeries(n);
    return 0;
}
    