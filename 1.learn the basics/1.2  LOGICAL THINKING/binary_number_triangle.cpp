#include<iostream>
using namespace std;
void nBinaryTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++)
    {
        int k;
        if(i%2==0){
            k=0;
        }
        else
        k=1;
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
             if (k==1)
        {
            k=0;
        }
        else
        k=1;
        }
        cout<<endl;
       
    }
}
int main(){
    int n;
    cin>>n;
    nBinaryTriangle(n);

}
/*
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
*/