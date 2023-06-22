#include<iostream>
using namespace std;
#include<string>

bool isSubsequence(string s, string t) {
    bool ans = false;
    int n = s.length();
    int m =t.length();
    int count =0;
    int j =0;
    for(int i=0 ; i<n;i++)
    {
        while(j<=m)
        {
            if(t[j]==s[i]) {
                j+=1;
                count++;
                break;
            }
            j++;
        }
        if(j>m && count!=n) return false;
    }
    
    return true;
    
}

int main(){
    string  s = "abbc", t = "ahbgdc";
    cout << isSubsequence(s,t);
}
