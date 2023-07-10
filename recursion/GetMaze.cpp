#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<string> &ans)
{
    for(int i=0; i<ans.size();i++) cout<<ans[i] <<endl;
}
vector<string> getmazeseq(int srow,int scol, int erow, int ecol)
{
    if(srow==erow && scol==ecol) 
    {
        vector<string> ans;
        ans.push_back("");
        return ans;
    }
    vector<string> horizontal;
    vector<string> vertical;
    if(scol<ecol) 
    {
        horizontal = getmazeseq(srow, scol+1,erow,ecol);
    }
    if(srow<erow) 
    {
         vertical = getmazeseq(srow+1,scol,erow, ecol);
    }
    
    vector<string> res;
    
    for(int i=0; i<horizontal.size();i++)
    {
        horizontal[i] =horizontal[i]+'h';
        res.push_back(horizontal[i]);
    }
    for(int i=0; i<vertical.size();i++)
    {
        vertical[i] =vertical[i]+'v';
        res.push_back(vertical[i]);
    }
    
    return res;
}
int main(){
    int row =3, col = 3;
    vector<string> ans ;
    ans =getmazeseq(0,0, row-1,col-1);
    print(ans);
    return 0;
}