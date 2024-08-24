#include<iostream>
using namespace std;

int getBit(int n, int pos){
    return (n&(1<<pos)) != 0;
}

int setBit(int n, int pos){
    return(n|(1<<pos));
}

int clearBit(int n, int pos){
    return(n&(~(1<<pos)));
}

int updateBit(int n, int pos, int up){
    if(up){
        return setBit(n,pos);
    }else{
        return clearBit(n,pos);
    }
}

int main(){

    int n = 5;
    /*cout << getBit(n,2)<<endl; //Give Bit value at pos 
    cout << setBit(n,1)<<endl; //SetBit to 1
    cout << clearBit(n,2)<<endl; //Clear bit - set bit = 0*/
    cout<< updateBit(n,0,1);
    

    return 0;
}