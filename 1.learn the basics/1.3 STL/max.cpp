#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v {4,2,5,9,1};
    cout<<"The elements in the vector are: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    cout<<"The maximum element is: "<<*max_element(v.begin(),v.end());
}