#include<iostream>
using namespace std;

void alphaTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++)
    { int m=64+n;
        for(int j=1;j<=i;j++)
        {
        cout<<char(m)<<" ";
        m--;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    alphaTriangle(n);

}
/*
E 
E D 
E D C 
E D C B 
E D C B A 
*/