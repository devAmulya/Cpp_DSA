#include<iostream>
using namespace std;

int print(int arr[],int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }
}

int insertion_sort(int arr[], int n){
    for(int i = 1; i < n ;i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}

int main(){
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,size);
    print(arr,size);

}