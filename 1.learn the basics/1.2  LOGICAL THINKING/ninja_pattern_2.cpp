#include<iostream>
using namespace std;
int min(int a,int b)
{
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

void getNumberPattern(int n) {
    // Write your code here.
    int left,right,top,bottom;
    int k=(n*2)-1;
    for(int i=0;i<n*2-1;i++)
    {
        for(int j=0;j<n*2-1;j++)
        {
          left=j;
          top=i;
          if((k-i)>(i-k))
          {
              bottom=k-i-1;
          }
          else{
              bottom=k-n-1;
          }
          if((k-j)>(k-j))
          {
              right=k-j-1;
          }
          else{
              right=k-j-1;
          }
          
         
          
          int min_a = min(top, bottom);
          int min_b = min(left, right);
          cout << n - min(min_a, min_b);

         
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
   getNumberPattern(n);

}
/*
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555
*/