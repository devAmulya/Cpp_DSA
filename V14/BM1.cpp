#include<iostream>
using namespace std;

int getBit(int n, int pos){
    return n&(1<<pos);
}

int main(){

    int n = 5;
    int b = {getBit(5,2) == 0 ? 0:1};
    cout << b;
    

    return 0;
}