#include<bits/stdc++.h>
using namespace std;

void f(int i, int a[100], int n)
{
	if(i >= n/2) return;
	swap(a[i], a[n-i-1]);
	f(i+1, a, n);
}

int main()
{
	int n, arr[100];
	cout<<"Enter number of elements : ";
	cin>>n;
	for(int i= 0;i<n;i++)
	{
		cin>>arr[i];
	}
	f(0, arr, n);
	cout<<"Elements after reversing : \n";
	for(int i=0;i<n;i++) cout<<arr[i]<<endl;
}
