#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    return (n+sum(n-1));
}

int power(int n, int y){
    if(y == 0){
        return 1;
    }
    return n*power(n,y-1);
}

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n*factorial(n-1);
}

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    cout<<"Sum = "<<sum(5)<<endl;
    cout<<"Power = "<<power(2,5)<<endl;    
    cout<<"Factorial = "<<factorial(6)<<endl;
    cout<<"Fibonacci = "<<fibonacci(10)<<endl;

    return 0;
}