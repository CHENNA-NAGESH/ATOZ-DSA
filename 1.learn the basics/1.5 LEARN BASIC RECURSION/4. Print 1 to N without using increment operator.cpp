#include<bits/stdc++.h>
using namespace std;
void Print1toN(int i)
{
	if(i<2) return;
	i--;
	Print1toN(i);
	cout<<i<<endl;
}
int main()
{
	int n;
	cout<<"Enter range of numbers : ";
	cin>>n;
	Print1toN(n+1);
	return 0;
}
