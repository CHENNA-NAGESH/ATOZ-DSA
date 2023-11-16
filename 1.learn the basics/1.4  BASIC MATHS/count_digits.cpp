#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int countDigits(int n){
	// Write your code here.
	int i=0 , temp=n;
	while(n>0){
		int rem=n%10;
		n=n/10;

		if(rem>0)
		{
			if(int(temp%rem)==0)
			{
				i++;
			}
		}
        
	}	
	return i;
}
int main()
{
    int s;
    cin>>s;
    cout<<countDigits(s);
}
