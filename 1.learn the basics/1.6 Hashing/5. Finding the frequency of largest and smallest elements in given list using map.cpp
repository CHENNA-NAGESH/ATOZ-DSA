#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	map<int, int> mpp;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		mpp[arr[i]]++;
	}
	map<int, int> ::iterator itr;
	itr=mpp.begin();
	cout<<"Frequency of smallest element "<<itr->first<<" is : "<<itr->second<<endl;
	itr = mpp.end();
	itr--;
	cout<<"Frequency of largest element "<<itr->first<<" is : "<<itr->second;
}
