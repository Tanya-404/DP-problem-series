#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void getmazeseqwithjump(int srow,int scol, int erow, int ecol,string res) //without storing any value and directly printing it
{
    if(srow==erow && scol==ecol) 
    {
        cout << res << endl;
        return ;
    }
    
    for(int h=1; h<=ecol-scol;h++)
    {
        getmazeseqwithjump(srow,scol+h,erow,ecol, res+'h'+to_string(h));
    }
    for(int v=1; v<=erow-srow;v++)
    {
       getmazeseqwithjump(srow+v,scol,erow,ecol,res+'v'+to_string(v));
        
    }
    for(int d=1; d<=ecol-scol && d<=erow-srow;d++)
    {
        getmazeseqwithjump(srow+d,scol+d,erow,ecol,res+'d'+to_string(d));
       
    }
    return ;
}
/*void print(vector<string> &ans)
{
    for(int i=0; i<ans.size();i++) cout<<ans[i] <<endl;
}

vector<string> getmazeseqwithjump(int srow,int scol, int erow, int ecol)
{
    if(srow==erow && scol==ecol) 
    {
        vector<string> res;
        res.push_back("");
        return res;
    }
    vector<string> res;
    
    for(int h=1; h<=ecol-scol;h++)
    {
        vector<string> horizontal = getmazeseqwithjump(srow,scol+h,erow,ecol);
        for(int i=1; i<horizontal.size();i++)
        {
            res.push_back(horizontal[i]+'h' +to_string(h));
        }
    }
    for(int v=1; v<=erow-srow;v++)
    {
        vector<string> vertical = getmazeseqwithjump(srow+v,scol,erow,ecol);
        for(int i=1; i<vertical.size();i++)
        {
            res.push_back(vertical[i]+'v'+to_string(v));
        }
    }
    for(int d=1; d<=ecol-scol && d<=erow-srow;d++)
    {
        vector<string> diagonal = getmazeseqwithjump(srow+d,scol+d,erow,ecol);
        for(int i=1; i<diagonal.size();i++)
        {
            res.push_back(diagonal[i]+'d'+to_string(d));
        }
    }
    // print(res);
    return res;
}
*/

int main(){
    int srow=1, scol =1;
    int erow =3;
    int ecol =3;
    string res = "";
    getmazeseqwithjump(srow,scol,erow,ecol,res);
    // vector<string> ans = getmazeseqwithjump(1,1,2,2);
    // print(ans);
    return 0;
}