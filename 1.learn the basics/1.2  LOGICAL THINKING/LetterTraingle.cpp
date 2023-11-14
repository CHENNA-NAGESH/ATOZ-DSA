#include<iostream>
using namespace std;
void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
         cout<<char(64+j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
   nLetterTriangle(n);

}
/*
A 
A B 
A B C 
A B C D 
A B C D E 
*/