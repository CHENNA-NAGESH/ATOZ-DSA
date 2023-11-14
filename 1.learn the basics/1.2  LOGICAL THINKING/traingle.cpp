#include<iostream>
using namespace std;
void triangle(int n) {
	// Write your code here
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
int main(){
    int n;
    cin>>n;
    triangle(n);

}
/*
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
*/