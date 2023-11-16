
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

long reverseBits(long n) {
    // Write your code here.
    long arr[32];
    int i=0;
    int rem;
    while(n!=0){
        rem=n%2;
        n=n/2;
       
        arr[i]=rem;
        
        i++;
        
    }
    
long result=0;
int m=0;

for(int k=i;k<32;k++)
{
    arr[k]=0;
   
}
 
for(int j=31;j>=0;j--)
{
    result+=(arr[j]*pow(2,m));
   
    m++;
}
    return result;
}