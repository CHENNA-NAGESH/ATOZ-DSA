#include<iostream>
using namespace std;
void nStarTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=(n*2)-1;i++)
    {
        if(i<=n)
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        else
        {
            for(int j=1;j<=n-(i-n);j++)
            {
                cout<<"*";
            }

        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    nStarTriangle(n);

}
/*
*
**
***
****
*****
****
***
**
*
*/