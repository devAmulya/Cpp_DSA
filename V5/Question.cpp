#include<iostream>
#include<cmath>
using namespace std;


/*int main(){

    int n;
    cin>>n;

    int count = 0;
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            count++;
            break;
        }
    }
    if(count == 1){
        cout<<"Number is prime";
    }
    else{
        cout<<"Number is not prime";
    }
}*/

/*int main(){
    int n;
    cin>>n;

    int i = n;
    while(i > 0){
        int r = i % 10;
        i /= 10;
        cout<<r<<"\n";

    }
}*/

/*int main(){
    int n,rev = 0;
    cin>>n;

    while(n>0){
        int rem = n % 10;
        rev *= 10;
        
        rev += rem;
        n /= 10;
    }
    cout<<rev;
}*/

/*int main(){
    int n,cb= 0;
    cin>>n;
    int j = n;

    while(j>0){
        int i = j % 10;
        cb = cb + i*i*i;
        j /= 10;
    }
    if(n == cb){
        cout<<"number is armstong"; 
    }
    else{
        cout<<"number is not armstrong";
    }
}*/

/*int main(){
    char n;
    cin>>n;

    int r = n;
    cout<<r;
}*/

/*int main(){
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            cout<<i<<" ";
        }

    }

}*/

/*int main(){
    int n,fact = 1;
    cin>>n;

    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    cout<<"The factorial of "<<n<<" is : "<<fact;
}*/

int main(){
    char n;
    cin>>n;

    if(n == 'a'|| n == 'E' || n == 'I' || n == 'O' || n == 'U' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U' ){
        cout<<n<<" is a vowel. ";
    }
    else{
        cout<<n<<" is consonent. ";
    }
}

/*int main(){
    int n;
    cin>>n;
    int a = 0, b= 1;
    if(n == 1){
        cout<<"0 ";
    }
    else{
        cout<<a<<" "<<b<<" ";
    }
    for(int i = 2; i < n; i++){
        int c = a + b;
        a = b;
        b = c;
        cout<<b<<" ";
    }
}*/