#include<bits/stdc++.h>
using namespace std;
void sum(int sum1,int n)
{
	if(n == 0) 
	{
		cout<<sum1<<endl;
		return;
	}
	sum1+=n;
	n--;
	sum(sum1, n);
}
int main()
{
	int n;
	cout<<"Enter range of number to print sum of numbers : ";
	cin>>n;
	sum(0, n);
	return 0;
}
