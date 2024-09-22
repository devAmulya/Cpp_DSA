#include<iostream>
using namespace std;

bool issorted(int arr[], int size){
    if(size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    
    
    return issorted(arr+1,size-1);

}

void print(int n){
    if(n==0){
        return;
    }
    print(n-1);
    cout<<n<<" ";
}

void print_d(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    print_d(n-1);
}

int first(int arr[],int index,int size, int target){
    if(size == index){
        return -1;
    }
    if(arr[index] == target){
        return index;
    }
    return first(arr,index+1,size,target);
}
int last(int arr[], int index, int target){
    if(index == -1){
        return false;
    }
    if(arr[index] == target){
        return index;
    }
    return last(arr,index-1,target);
}

int main(){

    //sorted array
    int arr[] = {4,2,1,2,5,2,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array is sorted : "<<issorted(arr,size)<<endl;

    //print increasing and deecreasing
    print(10);
    cout<<endl;
    print_d(10);
    cout<<endl;

    //find first and last occurencce of  a number in array
    cout<<"First occurence : "<<first(arr,0,size,2)<<endl;
    cout<<"Second occurence : "<<last(arr,size-1,2);
    return 0;
}