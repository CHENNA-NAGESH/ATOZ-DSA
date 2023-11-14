#include<iostream>
using namespace std;
int charcterCase(char a){
	if(int(a)>=97 && int(a)<=122)
	{
		return 0;
	}
	if(int(a)>=65 && int(a)<=90)
	{
		return 1;
	}
	else{
		return -1;
	}
}
int main() {
	// Write your code here
	char a;
	cin>>a;
	cout<<charcterCase(a);
	
}