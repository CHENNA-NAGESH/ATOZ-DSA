#include<bits/stdc++.h>
#include <iostream>
using namespace std;
bool palindrome(int x)
{
    // Write your code here
       if(x<0)
        {
            return false;
        }
        long int rev=0,temp=x;
        while(x){
       rev=(rev*10)+(x%10);
       x=x/10;
        }
        if(temp==rev){
            return true;
        }
        else{
            return false;
        }
    
}
int main()
{
    int s;
    cin>>s;
    cout<<palindrome(s);
}

