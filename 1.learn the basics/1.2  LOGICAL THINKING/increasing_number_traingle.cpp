#include<iostream>
using namespace std;
void nNumberTriangle(int n) {
    // Write your code here.
    int k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
   nNumberTriangle(n);

}
/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/
