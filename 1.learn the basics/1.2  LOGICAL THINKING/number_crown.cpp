#include<iostream>
using namespace std;
void numberCrown(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(int j=1;j<=(n*2)-(i*2);j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<(i-j)+1<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    numberCrown(n);

}
/*
1                 1 
1 2             2 1 
1 2 3         3 2 1 
1 2 3 4     4 3 2 1 
1 2 3 4 5 5 4 3 2 1 
*/