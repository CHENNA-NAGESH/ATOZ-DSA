#include<bits/stdc++.h>
#include <iostream>
bool checkArmstrong(int n){
	//Write your code here
	int i=0,temp=n,temp2=n,sum=0;
	while(n)
	{
		n=n/10;
		i++;
	}

	while(temp){
		sum+=pow((temp%10),i);
		temp=temp/10;
	}
	if(temp2==sum){
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
    cout<<checkArmstrongs(s);
}
