#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of arrays : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }

    /*Running Sum of an array
    int sum = 0;
    int sum_arr[n];
    for(int i = 0; i < n;i++){
        sum += arr[i];
        sum_arr[i] = sum;
    }
    for(int i = 0;i < n; i++){
        cout<<sum_arr[i]<<" ";
    }*/

   int extc;
   cin>>extc;
   int max = arr[0];
   for(int i = 1; i < n ; i++){
       if(arr[i] > max){
           max = arr[i];
       }
   }
   bool arr1[n];
   for(int i = 0; i < n ; i++){
       if((arr[i]+ extc) >= max){
        arr1[i] = true;
       }else{
        arr1[i] = false;
       }
   }
   for(int i = 0;i < n; i++){
        cout<<arr1[i]<<" ";
    }
}