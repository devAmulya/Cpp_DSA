#include<iostream>
using namespace std;

int unique(int arr[], int n){
    int x = 0; 
    for(int i = 0; i < n; i++){
        x ^= arr[i];
    }
    return x;
}

void unique_2(int arr[], int n){
    int x = 0; 
    for(int i = 0; i < n; i++){
        x ^= arr[i];
    }
    int x1 = x;
    int setbit = 0, pos = -1;
    while(setbit != 1){
        setbit = x & 1;
        pos++;
        x >>= 1;
    }
    int x2 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] & (1 << pos)){
            x2 ^= arr[i];
        }
    }
    cout<<x2<<" "<<(x2^x1);

}

int setBit(int x, int pos){
    return (x | (1<<pos));
}

bool getBit(int x, int pos){
    return (x & (1<<pos));
}

int triplet_unique(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < 64; i++){
        int sum1 = 0;
        for(int j = 0; j < n; j++){
            if(getBit(arr[j],i)){
                sum1++;
            }
        }
        if(sum1 % 3 != 0){
            sum = setBit(sum,i);
        }
    }
    return sum;
}

int main(){

    /*int arr[] = {2,4,6,3,4,6,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<unique(arr,n)<<endl;*/
    
    /*Two unique values
    int arr2[] = {2,4,6,7,4,5,6,2};
    unique_2(arr2,8);*/

    /*Triplet - one unique value*/
    int arr[] = {1,1,1,2,2,2,3,4,3,3};
    cout<<triplet_unique(arr,10);
    

    return 0;
}