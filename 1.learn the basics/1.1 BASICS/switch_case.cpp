#include<iostream>
using namespace std;
double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here
	double pi=22.0/7.0;
	switch(ch){
     case 1:
	   
        
	 	return pi*(a[0]*a[0]);
     case 2:
	    return a[0]*a[1];
	}
    return 0;
    
}
int main(){
    int ch;
    double c;
    cin>>ch;
    vector<double> a;
    for(int i=0;i<ch;i++)
    {
        cin>>c;
        a.push_back(c);
    }
    
    cout<<areaSwitchCase(ch,a);
}
