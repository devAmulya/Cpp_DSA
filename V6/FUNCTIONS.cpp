#include<iostream>
#include<cmath>
using namespace std;

/*Adding two numbers
int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<add(a,b);
    return 0;
}*/

/*int print(int b){
    cout<<b<<endl;
}
int main(){
    int a;
    cin>>a;
    print(a);
    return 0;
}*/

/*PRINT PRIME NO BTW 2 NOS
bool isPrime(int c){
    for(int i = 2; i <= sqrt(c); i++){
        if(c % i == 0){
            return false;
        }
    }
    return true;

}
int main(){

    int a,b;
    cin>>a>>b;

    for(int i = a; i <= b; i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }

    return 0;

}*/

/*FIBONACHHI SERIES
int fib(int n){

    int a = 0;
    int b = 1;

    for(int i = 1; i <=n; i++){
        
        cout<<a<<endl;
        int sum = a+b;
        a = b;
        b = sum;
    }

}

int main(){
    int n;
    cin>>n;

    fib(n);
}*/

/*FACTORIAL
int fact(int a){
    int sum = 1;
    for(int i = 2; i<= a;i++){
        sum *= i;
    }
    cout<<sum;

}

int main(){
    int n;
    cin>>n;

    fact(n);
}*/

/*ncr
int fact(int a){
    int f = 1;
    for(int i = 2; i <= a; i++){
        f *= i;
    }
    return f;
}
int main(){
    int n,r;
    cin>>n>>r;
    float c = fact(n)/(fact(n-r)*fact(r));
    cout<<c;
    return 0;
}*/

/*PASCAL TRIANGLE
int fact(int n){
    int f = 1;
    for(int i = 2; i <= n; i++){
        f *= i;
    }
    return f;
}

int ncr(int n, int r){
    int c = fact(n)/(fact(n-r)*fact(r));
    return c;
}

int main(){
    int a;
    cin>>a;

    for(int i = 0; i < a; i++){
        for(int j = 0; j <= i; j++){
            int a = ncr(i,j);
            cout<<a<<" ";

        }
        cout<<""<<endl;
    }
    return 0;
}*/

