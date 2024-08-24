#include<iostream>
using namespace std;

int ispowerof2(int n){
    return (n&(n-1));
}

int no_of_one(int n){
    int count = 0;
    while(n){
        count++;
        n = (n&(n-1));
    }
    return count;
}

void subsets(int arr[], int n){
    for(int i = 0; i < (1<<n); i++){
        for(int j = 0; j < n; j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){

    /*power of 2
    int n;
    cin >> n;
    ispowerof2(n) ? cout<<"Not power"<<endl : cout<<"Power"<<endl;
    */

    /*TO count no of ones in binary number
    int n;
    cin >> n;
    cout <<  no_of_one(n);
    */

    /*Subsets*/
    int arr[] = {1,2,3,4};
    subsets(arr,4);

    return 0;
}