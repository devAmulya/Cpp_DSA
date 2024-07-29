#include<iostream>
#include<limits.h>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements :";
    cin>>n;
    /*int arr[n];
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }*/

    /*max till i
    int maxno = arr[0];
    for(int i = 1; i <= n ; i++){
        cout<<maxno<<" ";
        maxno = max(maxno, arr[i]);
    }*/

   /*sum of all subarrays
   for(int i = 0; i < n; i++){
    int sum = 0;
    for(int j = i; j < n; j++){
        sum += arr[j];
        cout<<sum<<" ";
    }
   }*/

  /*Longest Arithmatic Subarray*/
  /* O(n^2) solution - out of constraint(first thought solution)
  int nart = 2;
  for(int i = 0; i < n-2; i++){
    for(int j = i+1;j < n-1;j++){
        if(abs((arr[j+1]-arr[j])) == (abs(arr[j]-arr[j-1]))){
            if(nart < j-i+2){
                nart = j-i+2;
            }continue;
        }else{
            break;
        }
    }
  }
  cout<<"Number is : "<<nart;*/
  /*O(n) solution
  int ans = 2;
  int pd = arr[1] - arr[0];
  int j =2;
  int curr = 2;
  while(j<n){
    if(pd == arr[j]-arr[j-1]){
        curr++;
    }else{
        pd = arr[j] - arr[j-1];
        curr = 2;
    }
    ans=max(ans,curr);
    j++;
  }
  cout<<"%1:"<<ans;*/

  /*Record Breaker*/
  int arr1[n+1];
  for(int i = 0; i < n ; i++){
    cin>>arr1[i];
  }
  arr1[n] = -1;
  if(n==1){
    cout<<"BR days : "<<1;
    return 0;
  }

  int j = 0;
  int num = 0;
  int mx = -1; 
  /* No Brainer if else statement
  if(arr[j] > arr[j+1]){
    num = 1;
    mx = arr[j];
  }else{
    if(arr[j+1]>arr[j+2]){
        num = 1;
    }else{
        num = 0;
    }
    mx = arr[j+1];
  }
  j = 2;*/
  while(j<n){
    if(arr1[j] > mx && arr1[j] > arr1[j+1]){
        num++;
    }mx = max(arr1[j],mx);
    j++;
  }
  cout<<"BR days : "<<num;



    return 0;
}