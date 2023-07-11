/*Find all possible ways to climb n stairs given you can only climb 1,2 or 3 stairs at once*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
void getstairs2(int n, string res) //without storing any value and directly printing it
{
    if(n==0)
    {
        cout << res << endl;
        return ;
    }
    else if(n<0) return ;
    getstairs2(n-1,res+'1');
    getstairs2(n-2,res+'2');
    getstairs2(n-3,res+'3');
    return ;
}
/*void print(vector<string> ans)
{
    for(int i=0; i<ans.size();i++) cout<<ans[i] <<endl;
}
vector<string> getstairs(int n)
{
    if(n==0)
    {
        vector<string> ans;
        ans.push_back("");
        return ans;
    }
    else if(n<0)
    {
        vector<string> ans;
        return ans;
    }
    vector<string> p1 =getstairs(n-1);
    vector<string> p2 =getstairs(n-2);
    vector<string> p3 =getstairs(n-3);
    vector<string> res;
    for(int i=0; i<p1.size();i++)
    {
        p1[i] =p1[i]+'1';
        res.push_back(p1[i]);
    }
    for(int i=0; i<p2.size();i++)
    {
        p2[i] =p2[i]+'2';
        res.push_back(p2[i]);
    }
    for(int i=0; i<p3.size();i++)
    {
        p3[i] =p3[i]+'3';
        res.push_back(p3[i]);
    }
    return res;
}*/

int main(){
    int n=3;
    string res = "";
    getstairs2(n,res);
    
    // vector<string> ans = getstairs(n);
    // print(ans);
    return 0;
}