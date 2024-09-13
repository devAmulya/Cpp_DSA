#include<iostream>
using namespace std;

int divisible(int n, int a, int b){
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);
    return c1+c2-c3;
}

int gcd(int a, int b){
    /*Recursive approach
    if(a == 0 ){
        return b;
    }else if(b == 0){
        return a;
    }
    if(a > b){
        gcd(a%b,b);
    }else{
        gcd(b%a,a);
    }
    */
    while(b!=0){
        int rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}

int main(){

    /*INclusion Exclusion Principle
    int n;
    cin >> n;
    int a,b;
    cin >> a >> b;
    cout<<divisible(n,a,b);
    */

    //Euclid Algorithm - GCD
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b);

    return 0;
}