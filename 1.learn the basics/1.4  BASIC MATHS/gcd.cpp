#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int calcGCD(int n, int m){
    // Write your code here.
  if (m == 0) {
		return n;
	}
	return calcGCD(m, n % m);
    

}
int main()
{
    int s;
    cin>>s;
    cout<<calcGCD(5,10);
}
