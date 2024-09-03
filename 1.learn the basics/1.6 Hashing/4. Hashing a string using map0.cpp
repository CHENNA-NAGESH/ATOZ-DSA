#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	
	map<char, int> mpp;
	for(int i=0; i<s.size(); i++)
	{
		mpp[s[i]]++;
	}
	
	int q;
	cin>>q;
	while(q--){
		char character;
		cin>>character;
		cout<<mpp[character]<<endl;
	}
	
	return 0;
}
