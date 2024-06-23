#include<iostream>
#include<cmath>
#include<string>
using namespace std;

/*SUM OF N NATURAL NUMBER
int sum(int n){
    int s = n*(n+1)/2;
    int s1 = 1;
    for(int i = 2; i <= n; i++){
        s1 += i;

    }
    cout<<s<<" "<<s1;
}
int main(){
    int n;
    cin>>n;

    sum(n);

}*/

/*CHECK PYTHOGORUN TRIPET 1
int max1(int a,int b,int c){
    int x = max(a,max(b,c));
    int y,z;
    if (a == x){
        y = b;
        z = c;
    }
    else if(b == x){
        y = a;
        z=c;
    }
    else{
        y = a;
        z = b;
    }
    if(pow(x,2) == pow(y,2)+pow(z,2)){
        cout<<"pythogorus triplet";
    }
    else{
        cout<<"Not pythogorus Triplet";
    }

}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    max1(a,b,c);
    

}

2 

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int a2 = a*a,b2 = b*b, c2 = c*c;
    if(a2 == b2 + c2 || b2 == a2 + c2 || c2 == a2 + b2){
        cout<<"pythogorus tiplet";
    }
    else{
        cout<<"Not pythogorus triplet";
    }
}*/

/*CONVERSIONS*/

/*BINARY TO DECIMAL*/

int BTD(int n){
    int dec = 0;
    for(int i = 0; n > 0; i++){
        int a = n % 10;
        dec += a * pow(2,i);
        n /= 10;
    }
    return dec;
}

/*OCTAHEDRAL TO DECIMAL*/

int OTD(int n){
    int sum = 0;

    for(int i = 0; n > 0; i++){
        int a = n % 10;
        sum += a*pow(8,i);
        n /= 10;
    }
    
    return sum;

}

/*HEXADECIMAL TO DECIMAL*/

int HTD(string n){
    int sum = 0;
    int x = 1;
    int l = n.size();

    for(int i = (l-1); i >= 0; i--){
        if(n[i] >= '0' && n[i] <= '9'){
            sum += x*(n[i]-'0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F'){
            sum += x*(n[i]-'A'+10);
        }
        x *= 16;
    }
    return sum;
}

/*DECIMAL TO BINARY*/

int DTB(int dec){
    int sum = 0;

    for(int i = 0; dec > 0; i++){
        int a = dec % 2;
        sum += a*pow(10,i);
        dec /= 2;
    }
    return sum;
}

/*DECIMAL TO OCTAHEDRAL*/

int DTO(int dec){
    int sum = 0;

    for(int i = 0; dec > 0; i++){
        int a = dec % 8;
        sum += a*pow(10,i);
        dec /= 8;
    }
    return sum;
}

/*DECIMAL TO HEXADECIMAL*/

string DTH(int dec){
    string sum = "";
    for(int i = 1; dec > 0; i++){
        int y = dec%16;
        if(y >= 0 && y <= 9){
            sum = sum + to_string(y);
        }
        else if(y >= 10 && y <= 15){
            char A = 'A'+ y - 10;
            sum.push_back(A);

        }
        dec /= 16;
    }
    
    return sum;
}

//CALLING ALL


int main(){
    int n,dec;
    string s;
    cin>>n>>dec>>s;
    cout<<BTD(n)<<" "<<OTD(n)<<" "<<HTD(s)<<endl;
    cout<<DTB(dec)<<" "<<DTO(dec)<<" "<<DTH(dec)<<endl;


}

/*ADDING TWO BINARY NUMBER
int main(){
    int n,dec;
    cin>>n>>dec;
    int a = BTD(n);
    int b = BTD(dec);
    int c = a + b;
    int d = DTB(c);
    cout<<n<<" + "<<dec<<" = "<<d;
}*/


/*int reverse(int n){
    int a = 0;
    while(n>0){
        int i = n%10;
        a = a*10+i;
        n /= 10;
    }
    return a;
}

int addBINARY(int a, int b){
    int add = 0;
    int carry = 0;
    while(a > 0 && b > 0){
        if(a % 2 == 0 && b % 2 == 0){
            add = add*10 + carry;
            carry = 0;
        }
        else if((a % 2 ==1 && b % 2 == 0 ) || (a % 2 == 0 && b % 2 == 1)){
            if(carry == 0){
                add = add*10 + 1;
            }
            else{
                add = add*10 + 0;
                carry = 1;
            }
        }
        else{
            add = add*10 + carry;
            carry = 1;
        }
        a /= 10;
        b /= 10;
    }

    while(a>0){
        if(a % 2 == 0){
            add = add*10+carry;
        }
        else{
            if(carry == 1){
                add = add*10 + 0;
            }
            else{
                add = add*10 + 1;
            }
        }
        a /= 10;
    }
    while(b>0){
        if(b % 2 == 0){
            add = add*10+carry;
        }
        else{
            if(carry == 1){
                add = add*10 + 0;
            }
            else{
                add = add*10 + 1;
            }
        }
        b /= 10;
    }
    add = add*10 + carry;
    int ad = reverse(add);
    return ad;
}

int main(){
    int n,m ;
    cin>>n>>m;
    cout<<addBINARY(n,m);
}*/

