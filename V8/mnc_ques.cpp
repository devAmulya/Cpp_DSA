#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    long long int N = 100000;
    int idx[N];
    for(int i = 0; i  < N; i++){
        idx[i] = -1;
    }
    int min_idx = INT_MAX;
    for(int i = 0; i < n; i++){
        if(idx[arr[i]] != -1){
            min_idx = min(min_idx,idx[arr[i]]);
        }
        else{
            idx[arr[i]] = i;
        }
    }

    cout<<min_idx;

    return 0;
    

}