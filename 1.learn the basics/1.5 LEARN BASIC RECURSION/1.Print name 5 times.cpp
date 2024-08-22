#include<bits/stdc++.h>
int count = 0;
void print()
{
	if(count == 5)
	{
		return;
	}
	printf("Nagesh\n");
	count++;
	print();
}
int main()
{
	print();
	return 0;	
}
