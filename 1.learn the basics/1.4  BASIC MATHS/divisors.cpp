#include<bits/stdc++.h>
#include <iostream>
int sumOfDivisors(int k){
	int sum=0;
	for(int i=1;i<=k;i++)
	{
		if(k%i==0)
		 sum+=i;
	}
	return sum;

}
int sumOfAllDivisors(int n){
	// Write your code here.
	int sum=0;
	for(int i=1;i<=n;i++){
     sum+=sumOfDivisors(i);
	}	
	return sum;
}

int main()
{
    int s;
    cin>>s;
    cout<<sumOfDivisors(s);
}
