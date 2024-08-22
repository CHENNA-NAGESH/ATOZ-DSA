#include<bits/stdc++.h>
using namespace std;
void PrintNto1(int i, int n)
{
	if(i>n)	return;
	i++;
	PrintNto1(i,n);
	cout<<i<<endl;
}
int main()
{
	int n;
	cout<<"Enter range to be printed : ";
	cin>>n;
	PrintNto1(0,n-1);
	return 0;
}
