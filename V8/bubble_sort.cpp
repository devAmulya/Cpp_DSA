#include<iostream>
using namespace std;
int print(int arr[],int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }
}

int bubble_sort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j+1]<arr[j]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp; 
            }
        }
    }
}

int main(){
    int arr[6] = {12,45,23,51,19,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,size);
    print(arr,size);
}