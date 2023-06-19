// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
#include<iostream>
using namespace std;
 int climbstairs(int n) {
        int step1 =1;
        int step2=1;
        for(int i=2;i<=n;i++)
        {
            int curr = step1 +step2;
            step2=step1;
            step1 =curr;
            
        }
        return step1;     
    }


int main(){
    int n;
    cout << "Enter the number of stairs -- ";
    cin >> n;
    cout << "The number of ways stairs can be climbed are -- " << climbstairs(n);
    return 0;
}