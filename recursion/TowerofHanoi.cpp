/*The tower of Hanoi is a famous puzzle where we have three rods and N disks. The objective of the puzzle is to move the entire stack to another rod. You are given
the number of discs N. Initially, these discs are in the rod 1. You need to print all the steps of discs movement 
so that all the discs reach the 3rd rod. Also, you need to find the total moves.
Note: The discs are arranged such that the top disc is numbered 1 and the bottom-most disc is numbered N. 
Also, all the discs have different sizes and a bigger disc cannot be put on the top of a smaller disc. 
Refer the provided link to get a better clarity about the puzzle.*/

#include<iostream>
using namespace std;
#include<math.h>
long long cnt=0;

long long toh(int n, int from, int to, int aux) 
{
    if(n==0) return cnt;
    toh(n-1 , from ,aux, to); //to move n-1 disks from ->aux 
    cout<< "move disk "<< n<<" from rod "<<from<< " to rod "<<to << endl;
    cnt++;
    toh(n-1, aux,to ,from);//to move n-1 disks aux->to;
    return cnt; 
}

/*void toh(int n, char from , char to ,char aux)
{
    if(n==0) return;
    toh(n-1 , from ,aux, to);
    cout << from << "->"<<to << endl;
    toh(n-1, aux,to ,from);
}*/

int main(){
    int a=1, b=3,c=2;
    cout << toh(3,a,b,c);
    return 0;
}
