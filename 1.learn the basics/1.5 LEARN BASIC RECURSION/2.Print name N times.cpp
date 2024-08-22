#include<bits/stdc++.h>
using namespace std;
void PrintNtimes(int n)
{
	if(n == 0) return;
	cout<<"Nagesh\n";
	n--;
	PrintNtimes(n);
}
int main()
{
	int n;
	cout<<"Enter number of times name shouldd be printed: ";
	cin>>n;
	PrintNtimes(n);
	return 0;
}
