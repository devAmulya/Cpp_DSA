#include<iostream>
#include<cmath>
using namespace std;

int main(){

    /* going out not on even and not without money
    int pocketMoney = 3000;
    for (int date = 1; date <= 30; date++){
        if (date%2==0){
            continue;
        }
        if (pocketMoney == 0){
            break;
        }

        cout<<"Go out Today"<<date<<endl;
        pocketMoney -= 300;
    }
    */

    /* to not print number div by 3 in 1 to 100
    for (int i = 1; i <= 100;i++){
        if (i%3 == 0){
            continue;
        }
        else{
            cout<<i<<endl;
        }
    }*/

    /* check if a nuber is prime or not
    int n,count = 0;
    cin>>n;
    for(int i = 2;i < sqrt(n);i++){
        if (n%i == 0){
            count += 1;
            break;
        }
    }
    if (count == 0){
        cout<<n<<" is prime"<<endl;
    }
    else {
        cout<<n<<" is not primme"<<endl;
    }
    */

    //  PRINT PRIME NUMBER BETWEEN A AND B
    int n,j;
    cin>>n;
    cin>>j;
    while(n<=j){
        int count =0;
        for(int i = 2;i < n;i++){
            if (n%i == 0){
                count += 1;
                break;
            }
        }
        if (count == 0){
            cout<<n<<endl;
        }
        n++;
    }
    
    return 0;
}
    

    //*/


