#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int num,rem;
	cin>>num;
	int even_sum=0;
	int odd_sum=0;
	while(num)
	{
		rem=num%10;
		if(rem%2==0)
		even_sum+=rem;
		else
		odd_sum+=rem;
		num=num/10;
	}
	cout<<even_sum<<" "<<odd_sum;
	
}
