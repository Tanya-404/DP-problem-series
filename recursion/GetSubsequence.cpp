#include <bits/stdc++.h>
using namespace std;
void print(vector<string> ans)
{
    for(int i=0; i<ans.size();i++) cout<<ans[i] <<endl;
}
void printSubsequence(string input, string output,vector<string> &ans)
{
	if (input.empty()) {
        ans.push_back(output);
		return;
	}
    //pick
	printSubsequence(input.substr(1), output + input[0],ans);
    //not pick
	printSubsequence(input.substr(1), output,ans);
}

int main()
{
	string output = "";
	string input = "abc";
    vector<string> ans;
	printSubsequence(input, output, ans);
    print(ans);
	return 0;
}
