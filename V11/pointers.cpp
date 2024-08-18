#include<iostream>
using namespace std;

void increment(int a){
    a++;
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    
    /*General
    int a = 10;
    int *ptr; //Bad practise always assign value 
    ptr = &a;
    cout<<&a<<endl;    //Addres of a
    cout<<ptr<<endl;   //Addres of a
    cout<<*ptr<<endl;  //Value store in ptr(a) - derefrencing
    *ptr = 20;
    cout<<a<<endl;
    */

    /*Pointer Arithmetic
    ptr++;
    cout<<ptr<<endl;  //int size 4 so memory move forward by 4
    cout<<*ptr<<endl; //garbage value
    */

    /*Pointer array
    int arr[] = {10,20,30};
    cout<<*arr<<endl;
    int *ptr1 = arr;
    for(int i = 0; i < 3; i++){
        cout<<*ptr1<<endl;
        cout<<*(arr+i)<<endl;
        ptr1++;
    }*/

    /*Pointer to Pointer
    int a = 10;
    int *p = &a;
    cout<<*p<<endl;
    int **q = &p;
    cout<<*q<<endl;
    cout<<**q<<endl;
    */

    //Passing pointer to function
    int a = 2;
    increment(a); 
    cout<<a<<endl; //Value doesnot change
    //pass by reference
    int b = 3;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl; 

    return 0;
}