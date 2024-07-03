#include<iostream>
using namespace std;
int print(int arr[],int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }
}
int selection_sort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int min = arr[i];
        int index = i;
        int count = 0;
        for(int j = i+1; j < n; j++){
            if(min > arr[j]){
                min = arr[j];
                index = j;
                count = 1;
            }
        }
        if (count == 1){
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp; 
        }
    }
}

int main(){
    int arr[6] = {12,45,23,51,19,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,size);
    print(arr,size);

}