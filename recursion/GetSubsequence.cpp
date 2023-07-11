#include <bits/stdc++.h>
using namespace std;
void print(vector<string> ans)
{
    for(int i=0; i<ans.size();i++) cout<<ans[i] <<endl;
}
void printSubsequence2(string input, string output) //without storing any output we're directly printing it
{
	if (input.empty()) {
        cout<<output<<endl;
		return;
	}
    //pick
	printSubsequence2(input.substr(1), output + input[0]);
    //not pick
	printSubsequence2(input.substr(1), output);
}
/*void printSubsequence(string input, string output,vector<string> &ans)
{
	if (input.empty()) {
        ans.push_back(output);
		return;
	}
    //pick
	printSubsequence(input.substr(1), output + input[0],ans);
    //not pick
	printSubsequence(input.substr(1), output,ans);
}*/

int main()
{
	string output = "";
	string input = "abc";
    vector<string> ans;
	printSubsequence2(input, output);
    // print(ans);
	return 0;
}
