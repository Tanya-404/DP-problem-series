#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void getmazeseq2(int srow,int scol, int erow, int ecol, string res) //without storing any value and directly printing it 
{
    if(srow==erow && scol==ecol) 
    {
        cout << res <<endl;
        return ;
    }
    if(scol<ecol) 
    {
        getmazeseq2(srow, scol+1,erow,ecol, res+'h');
    }
    if(srow<erow) 
    {
        getmazeseq2(srow+1,scol,erow,ecol,res+'v');
    }

    return ;
}
/*void print(vector<string> &ans)
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
}*/

int main(){
    int row =3, col = 3;
    string res = "";
    // vector<string> ans ;
    // ans =getmazeseq(0,0, row-1,col-1);
    // print(ans)
    getmazeseq2(0,0,row-1, col-1,res);
    return 0;
}