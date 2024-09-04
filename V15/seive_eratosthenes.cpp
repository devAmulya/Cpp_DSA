#include<iostream>
using namespace std;

void primeSieve(int n){
    int * arr = new int[n];
    for(int i = 0; i < n; i++){
        arr[i] = 1;
    }
    for(int i = 2; i < n; i++){
        if(arr[i]){
            for(int j = i * i; j < n; j = j + i){
                arr[j] = 0;
            }
        }
    }
    for(int i = 2; i < n; i++){
        if(arr[i]){
            cout<<i<<" ";
        }
    }
    delete []arr;
}

void primeSieve2(int n){
    int * arr = new int[n+1];
    for(int i = 0; i <= n; i++){
        arr[i] = 1;
    }
    int i = 2;
    while(n > 1){
        if(arr[i] && (n%i==0)){
            cout<<i<<" ";
            n /= i;
            continue;
        }else if(arr[i]){
            for(int j = i * i; j < n; j = j + i){
                arr[j] = 0;
            }
        }
        i++;
    }
    delete []arr;
}

int main(){
    /*sieve of Erathanos - Prime NUmber
    int n;
    cin >> n;
    primeSieve(n);
    */

    //Prime factorization using sieve
    int n;
    cin >> n;
    primeSieve2(n);

    

}