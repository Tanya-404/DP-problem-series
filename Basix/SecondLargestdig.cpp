/*Given an alphanumeric string s, return the second largest numerical digit that appears in s, \
or -1 if it does not exist.
An alphanumeric string is a string consisting of lowercase English letters and digits.*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int secondHighest(string s) {
    int slargest = -1;
    int largest = -1;
    for(int i=0; i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            int digit = s[i]-'0';
            if(digit>largest) 
            {
                slargest =largest;
                largest =digit; 
            }
            else if(digit < largest && digit > slargest)
            {
                slargest = digit;
            } 
        }
    }
    return slargest; 
}

int main(){
    string  s = "dfa12321afd";
    cout << secondHighest(s);
    
    return 0;
}