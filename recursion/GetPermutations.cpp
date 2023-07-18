/*Print all the permutations of given string*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Permutation(string input,string output)
{
    if(input.empty())
    {
        cout << output << endl;
        return ;
    }
    for(int i=0;i < input.length();i++)
    {
        char ch = input.at(i);
        string leftout =  input.substr(0,i)+ input.substr(i+1);
        Permutation(leftout, ch+output);
    }
    return;
}
int main(){
    string s= "abc";
    string op ="";
    Permutation(s,op);
    
    return 0;
}