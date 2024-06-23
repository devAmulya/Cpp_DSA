#include<iostream>
using namespace std;

int main(){

    /*MUltiple Language Robot
    char button;
    cout<<"ENter character : "<<endl;
    cin>>button;

    switch(button)
    {
        case 'a':
        cout<<"Hello"<<endl;
        break;
        case 'b':
        cout<<"Namaste"<<endl;
        break;
        case 'c':
        cout<<"Hola"<<endl;
        break;
        case 'd':
        cout<<"Ciano"<<endl;
        break;
        default:
        cout<<"I am still learning more"<<endl;
        break;
    }*/

    /*implement a simple calculator*/
    int a,b;
    char s;
    cout<<"Enter problem "<<endl;
    cin>>a>>s>>b;

    switch(s) 
    {
        case '+' :
        cout<<a+b<<endl;
        break;
        case '-' :
        cout<<a-b<<endl;
        break;
        case '*' :
        cout<<a*b<<endl;
        break;
        case '/' :
        cout<<a/b<<endl;
        break;
        default :
        cout<<"I am still learning"<<endl;
    }

    return 0;

}