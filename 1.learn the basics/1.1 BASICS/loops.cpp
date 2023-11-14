 #include<iostream>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int num;
        cin>>num;
        int a[1000];
        a[0]=1;
        a[1]=1;
        for(int i=2;i<num;i++ )
        {
                a[i]=a[i-1]+a[i-2];

        }
        cout<<a[num-1];
}