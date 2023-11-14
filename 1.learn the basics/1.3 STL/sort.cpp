#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    int arr[] = {4,2,1};

    sort(arr, arr+3, greater<int>());
    
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    sort(arr, arr+3);
    
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    

    
    return 0;
}