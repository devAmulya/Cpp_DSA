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
    /* First repeating element with smallest i
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

    cout<<min_idx;*/

    /*subarray = S unsorted constraints : 1 <= N <= 10^5
    int s = 12;
    int i = 0, j = 0, sum = 0, start = -1, end = -1;
    while(j<n && sum + arr[j] <= s){
        sum += arr[j];
        j++;
    }
    if(sum == s){
        cout<<i<<" "<<j-1;
        return 0;
    }
    while(j<n){
        sum += arr[j];
        while(sum>s){
            sum -= arr[i];
            i++;
        }
        if(sum == s){
            start = i;
            end = j;
            break;
        }
        j++;
        
    }
    cout<<start<<" "<<end;*/

    // Smallest possitive integer missing
    long long int N = 1000000;
    bool idx[N];
    for(int i = 0; i< N; i++){
        idx[i] = false;
    }
    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            idx[arr[i]] = true;
        }
    }
    int ans = -1;
    for(int i = 0; i < N; i++){
        if(idx[i] == false){
            ans = i;
            break;
        }
    }
    cout<<ans;
    return 0;
    

}