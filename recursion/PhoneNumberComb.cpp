/*Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the 
number could represent. Return the answer in any order.A mapping of digits to letters 
(just like on the telephone buttons) is given below. Note that 1 does not map to any letters.*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
void print(vector<string> ans)
{
    for(int i=0; i<ans.size();i++) cout<<ans[i] <<endl;
}
void CombinationofPhoneNumber(string digits,vector<string> comb,string op,int i)
    {
        if(i>=digits.length())
        {
            ans.push_back(op);
            return;
        }
        int number =digits[i]-'0';
        string val = comb[number];
        for(int j=0 ;j<val.length();j++)
        {
            CombinationofPhoneNumber(digits, comb , op+val[j],i+1);
        }
        
    }

int main(){
    string digits;
    cin >> digits;
    if(digits.length()==0) return {};
    vector<string> comb = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string op="";
    CombinationofPhoneNumber(digits, comb , op ,0);
    cout << "Output combinations are\n";
    print(ans);
    
    return 0;
}