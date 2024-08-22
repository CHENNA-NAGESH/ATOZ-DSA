#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
	if(n == 1) return 1;
	
	return n * fact(n-1);
}
int main()
{
	int n;
	cout<<"Enter number to find factorial : ";
	cin>>n;
	cout<<"Factorial of given number is : "<<fact(n);
	return 0;
}
