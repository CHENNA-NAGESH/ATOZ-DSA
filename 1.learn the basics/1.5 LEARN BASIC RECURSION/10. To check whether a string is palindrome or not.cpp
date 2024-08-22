#include<bits/stdc++.h>
using namespace std;

int f(int i, char a[100], int n){
	
	if(i >= n/2) return true;
	
	if(a[i] != a[n-i-1]) return false;
	
	f(i+1, a, n);
}

int main()
{
	int flag;
	char a[100];
	cin>>a;
	flag = f(0, a, strlen(a));
	if(flag == 1)	cout<<"Palindrome";
	else cout<<"Not a Palindrome";
	return 0;
}
