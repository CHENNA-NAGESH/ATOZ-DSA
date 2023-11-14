#include<iostream>
using namespace std;

void alphaHill(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++)
    { int k=0;
        for(int j=1;j<=n-i;j++)
        {k++;
            cout<<"  ";
            
        }
        int m=65;
       for(int j=1;j<=(2*i)-1;j++)
       { k++;
       

           if(k>n)
           {
             if (k == n + 1) {
               m = m - 2;
             }
             else
             {
                 m=m-1;
             }
               cout<<char(m)<<" ";
           } else {
               cout <<char(m++)<<" " ;
           }
           
       }
       cout<<endl;
        
        
    }
}
int main(){
    int n;
    cin>>n;
    alphaHill(n);

}
/*
        A 
      A B A 
    A B C B A 
  A B C D C B A 
A B C D E D C B A 
*/
