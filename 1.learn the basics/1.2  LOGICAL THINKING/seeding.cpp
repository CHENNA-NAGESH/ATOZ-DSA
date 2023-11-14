#include<iostream>
using namespace std;
void seeding(int n) {


	// Write your code here.
	
	// Write your code here.
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}

}
int main(){
    int n;
    cin>>n;
    seeding(n);

}
/*
* * * * * 
* * * * 
* * * 
* * 
* 

*/