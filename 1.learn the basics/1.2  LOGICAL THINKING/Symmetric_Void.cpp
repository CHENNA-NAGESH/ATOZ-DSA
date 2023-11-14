#include<iostream>
using namespace std;
void symmetry(int n) {
    // Write your code here.
    int k=0;
    for(int i=1;i<=n*2;i++)
    {   
        if(i<=n)
        {
             k=n-i+1;
        }
        else{
             k=i-n;
        }

        for(int j=1;j<=k;j++)
        {
            cout<<"* ";
        }
        for(int j=1;j<=(n*2)-(2*k);j++)
        {
            cout<<"  ";
        }
         for(int j=1;j<=k;j++)
        {
            cout<<"* ";
        }
      cout<<endl;  
    }
}
int main(){
    int n;
    cin>>n;
    symmetry(n);

}
/*
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
*/