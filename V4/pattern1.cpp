#include<iostream>
using namespace std;

/*int main(){
    int a,b;
    cin>>a;
    b = a-1;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            cout<<"*";
        }
        cout<<""<<endl;
    }
}*/

/*int main(){
    int a,b;
    cin>>a>>b;
    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= b; j++){
            if (i == 1 || i == a){
                cout<<"*\t";
            }
            else {
                if (j == 1 || j == b){
                    cout<<"*\t";
                }
                else{
                    cout<<"\t";
                }
            }
        }
        cout<<""<<endl;
    }
}*/

/*int main(){
    int a;
    cin>>a;
    for(int i = 1; i <= a;i++){
        for(int j = a+1-i; j > 0; j--){
            cout<<"*";
        }
        cout<<""<<endl;
    }
    return 0;
    
}*/

/*int main(){
    int a;
    cin>>a;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= a; j++){
            if (j >= a+1-i){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<""<<endl;
    }
    return 0;
}*/

/*int main(){

    int a;
    cin>>a;

    for(int i = 1; i <= a; i++){
        for(int j = 1; j<= i; j++){
            cout<<i<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}*/

/*int main(){

    int a,b = 1;
    cin>>a;

    for(int i = 1; i<= a; i++){
        for(int j = 1; j<= i; j++){
            cout<<b<<"\t";
            b += 1;
        }
        cout<<""<<endl;
    }

    return 0;
}*/

/*int main(){

    int a;
    cin>>a;

    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= a; j++){
            if (i <= (a+1)/2){
                if (j <= i || j > a-i){
                    cout<<"*\t";
                }
                else {
                    cout<<"\t";
                }
            }
            else{
                if(j <= a-i+1 || j >= i){
                    cout<<"*\t";
                }
                else{
                    cout<<"\t";
                }
            }
        }
        cout<<""<<endl;
    }

    return 0;

}*/

/*int main(){

    int n;
    cin>>n;

    for(int i = 1; i<= n; i++){
        for(int j = 1; j <= i; j++){
            if ((i+j)%2 == 0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<""<<endl;
    }
}*/

/*int main(){

    int n;
    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j < 2*n; j++){
            if(j<=n){
                if (j > n -i){
                    cout<<n-j+1<<"\t";
                }
                else {
                    cout<<"\t";
                }
            }
            else{
                if (j < n+i){
                    cout<<j-n+1<<"\t";
                }
                else {
                    cout<<"\t";
                }
            }
            
        }
        cout<<""<<endl;
    }

    return 0;
}*/

