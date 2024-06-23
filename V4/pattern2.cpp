#include<iostream>
#include<cmath>
using namespace std;


/*int main(){

    int n;
    cin>>n;

    for(int i = 1; i<= n; i++){
        for(int j = 1; j <= n-i+1; j++){
            cout<<j;
        }
        cout<<""<<endl;
    }

    return 0;
}*/

/*int main(){

    int n;
    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 2*n; j++){
            if(j > n-i && j < 2*n-i){
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

    int n;
    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j =1; j<=n; j++){
            if(j > n-i){
                cout<<i+j-n<<"\t\t";
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

    int n;
    cin>>n;

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= n; j++){
            if (i <= (n+1)/2){
                if (j > (n+1)/2 -i && j < (n+1)/2 +i ){
                    cout<<"*\t";
                }
                else{
                    cout<<"\t";
                }
            }
            else{
                if (j<i-(n)/2 || j > 3*(n+1)/2-i-1 ){
                    cout<<"\t";
                }
                else{
                    cout<<"*\t";
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

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= n; j++){
            if (i <= (n+1)/2){
                if (j > (n+1)/2 -i && j < (n+1)/2 +i ){
                    cout<<"*\t";
                }
                else{
                    cout<<"\t";
                }
            }
            else{
                if (j>= i-(n)/2 && j <= (3*n+1)/2-i ){
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

    for(int i = 1; i <= 2*n; i++){
        for(int j = 1; j < 2*n; j++){
            if (i <= n){
                if (j <= n-i || j > n+i-1){
                    cout<<"\t";
                }
                else{
                    cout<<"*\t";
                }

            }
            else{
                if(j < i-n || j > 3*n-i){
                    cout<<"\t";
                }
                else{
                    cout<<"*\t";
                }
            }
            
        }
        cout<<""<<endl;
    }
}*/

/*int main(){

    int n;
    cin>>n;

    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= n ; j++){
            if ((i+j)%4 == 0 || (i ==2 && (i+j)%4 == 2)){
                cout<<"*\t";
            }
            else {
                cout<<"\t";
            }
        }
        cout<<""<<endl;
            
    }
}*/

/*int main(){

    int n;
    cin>>n;

    for(int i =1; i <= n; i++){
        for(int j = 1; j < 2*n; j++){
            if (j == n-i+1 || j == n+i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<""<<endl;
    }
    for(int i =n; i >= 1; i--){
        for(int j = 1; j < 2*n; j++){
            if (j == n-i+1 || j == n+i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<""<<endl;
    }
}*/

/*int main(){

    int n;
    cin>>n;

    for(int i =1; i <= n; i++){

        for(int j = n-i; j > 0; j--){
            cout<<"*";
        }
        for(int j = 1; j <= 2*i-1; j++ ){
            if(j == 1 || j == 2*i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        for(int j = n-i; j > 0 ; j--){
            cout<<"*";
        }
        cout<<""<<endl;
    }

    for(int i = n; i > 0; i--){
        for(int j = n-i; j > 0; j--){
            cout<<"*";
        }
        for(int j = 1; j <= 2*i-1; j++ ){
            if(j == 1 || j == 2*i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        for(int j = n-i; j > 0 ; j--){
            cout<<"*";
        }
        cout<<""<<endl;
    }

    return 0;
}*/

/*int main(){

    int n;
    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            cout<<" ";
        }
        for(int j = 1; j <= n; j++){
            if(i == 1 || i == n){
                cout<<"*";
            }
            else{
                if(j == 1 || j == n){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<""<<endl;
    }
}*/

/*int main(){
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j == 1 || j == i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        
        for(int j = 1; j <= n; j++){
            if(j == (n-i+1) || j == n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<""<<endl;
    }
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n; j++){
            if(j == 1 || j == i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        
        for(int j = 1; j <= n; j++){
            if(j == (n-i+1) || j == n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<""<<endl;
    }
}*/

int main(){
    int n,coef;
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 1; j < n-i;j++){
            cout<<" ";
        }
        for(int j = 0; j <= i; j++){
            if(j == 0 || i == 0){
                coef = 1;
            }
            else{
                coef = coef*(i-j+1)/j;
            }
            cout<<coef<<" ";
        }
        cout<<""<<endl;
    }
}