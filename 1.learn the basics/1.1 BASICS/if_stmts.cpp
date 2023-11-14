#include<iostream>
using namespace std;
string compareIfElse(int a, int b) {
	// Write your code here
	if(a>b){
		return "greater";
	}
	else if(a==b)
	return "equal";
	else
	return "smaller";

}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<compareIfElse(a,b);
}