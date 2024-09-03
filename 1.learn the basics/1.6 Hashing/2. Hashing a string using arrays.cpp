#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	
	int hash[26];
	
	for(int i=0;i<s.size();i++)
	{
		hash[s[i] -'a' ]++;
	}
	
	int q;
	cin>>q;
	while(q--){
		char num;
		cin>>num;
		cout<<hash[num - 'a'];
	}
	
	return 0;
}
