#include<bits/stdc++.h>
using namespace std;
void PrintNto1(int n)
{
	if(n == 0) return;
	cout<<n<<endl;
	PrintNto1(--n);
}
int main()
{
	int n;
	cout<<"Enter range of numbers : ";
	cin>>n;
	PrintNto1(n);
	return 0;
}

