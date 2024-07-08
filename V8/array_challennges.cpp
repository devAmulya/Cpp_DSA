#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }
    int maxno = arr[0];
    for(int i = 1; i <= n ; i++){
        cout<<maxno<<" ";
        maxno = max(maxno, arr[i]);
    }
    return 0;
}