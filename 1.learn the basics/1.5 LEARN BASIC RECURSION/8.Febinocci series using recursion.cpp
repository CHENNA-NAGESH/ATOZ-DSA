#include<bits/stdc++.h>
using namespace  std;
void febi(int i, int j,int c, int n)
{
	if(c == n) return;
	cout<<j<<endl;
	c++;
	febi(j, i+j, c, n);
}
int main()
{
	int n;
	cout<<"Enter number of febinocci numbers to print : ";
	cin>>n;
	cout<<"0"<<endl;
	febi(0, 1, 0, n-1);
	return 0;
}
