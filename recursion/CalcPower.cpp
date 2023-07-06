#include<iostream>
using namespace std;
int Power2(int a, int b)
{
    if(b==0) return 1;
    int ans = Power2(a,b/2);
    if(b%2 == 0) return ans;
    else return a*ans;
}
int Power(int a , int b)
{
    if(b==0) return 1;
    return a *Power(a,b-1);
}
int main(){
    int a,b;
    cin >> a >> b;
    cout << Power(a,b);
    cout << " ";
    cout << Power(a,b);
    return 0;
}