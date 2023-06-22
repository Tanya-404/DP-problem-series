//check if the given string is the substring of another given string or not
#include<iostream>
using namespace std;
#include<string>

bool isSubsequence(string s, string t) {
    bool ans = false;
    int count =0;
    int j =0;
    for(int i=0 ; i<s.length();i++)
    {
        while(j<=t.length())
        {
            if(t[j]==s[i]) {
                j+=1;
                count++;
                break;
            }
            j++;
        }
        if(j>t.length() && count!=s.length()) return false;
    }
    
    return true;
    
}

int main(){
    string  s = "abbc", t = "ahbgdc";
    cout << isSubsequence(s,t);
}
