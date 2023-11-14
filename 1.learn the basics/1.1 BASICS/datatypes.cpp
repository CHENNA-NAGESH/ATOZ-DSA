#include<iostream>

using namespace std;

int dataTypes(string type) {
	// Write your code here
	if(type=="Long" || type == "Double"){
		return 8;
		
	}
	else if(type=="Float" || type =="Integer")
	{
		return 4;
	}
	else{
		return 1;
	}
}
int main()
{
    string s;
    cin>>s;
    cout<<dataTypes(s);
}
