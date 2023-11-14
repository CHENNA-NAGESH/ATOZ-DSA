#include<iostream>
using namespace std;
void nTriangle(int n) {
	// Write your code here
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
/*
1
1 2 
1 2 3
*/
int main(){
    int n;
    cin>>n;
    nTriangle(n);

}
