#include<iostream>
using namespace std;

void symmetry(int n) {
    // Write your code here.
    int k=0;
    for(int i=1;i<=n*2-1;i++)
    {
      if (i <= n) {
        k=i;
      }
      else{
        k=(n*2)-i;
      }
        for(int j=1;j<=k;j++)
        {
          cout<<"* ";
        }
        for(int j=1;j<=((n*2)-(2*k));j++)
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

*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 
*/