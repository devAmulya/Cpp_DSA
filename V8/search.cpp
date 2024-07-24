#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(key==arr[i]){
            cout<<"key found at place : "<<i+1;
            return true;
        }
    }
    return false;
}

bool binarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==key){
            cout<<"key found at place : "<<mid+1;
            return true;
        }
        else if (arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return false;

}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    /*bool a = linearSearch(arr,n,key);*/
    bool a = binarySearch(arr , n, key);
    if (a == false){
        cout<<"Key not found";
    }

    

    return 0;
}