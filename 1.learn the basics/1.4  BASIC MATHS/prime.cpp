#include<bits/stdc++.h>
#include <iostream>
bool isPrime(int n)
{
	// Write your code here.
	int count=0;
	if(n==1)
	{
		return false;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
          return false;
		}
		
	}
	
	return true;
}

int main()
{
    int s;
    cin>>s;
    cout<<isPrime(s);
}