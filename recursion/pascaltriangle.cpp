#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void print(vector<long long> ans)
{
    for(int i=0 ;i<ans.size() ;i++)
    {
        cout << ans[i] << " ";
    }
}
vector<long long> nthRowOfPascalTriangle(int n) {
        int mod= pow(10,9) +7;
        vector<long long>v;
        for(int i=0; i<n; i++){
            vector<long long>temp(i+1, 1);
            for(int j=1; j<i; j++){
                temp[j]= (v[j] + v[j-1]) % mod;
            }
            v=temp;
        }
        return v;
        }
int main(){
    int n;
    cin >> n;
    vector<long long> ans;
   print(nthRowOfPascalTriangle(n));
    
    return 0;
}