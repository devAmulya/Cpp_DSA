#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;

int main(){

    /*Syntax Analysis
    char arr1[100] = "apple";
    char arr[100];
    cin >> arr;
    cout<<arr<<endl;
    cout<<arr[2]<<endl;
    int i = 0;
    while(arr1[i] != '\0'){
        cout<<arr1[i]<<" ";
        i++;
    }*/

    /*Check Palindrome
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool flag = true;
    /*WHile loop
    int i = 0, j = n-1;
    while(i<=j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }else{
            flag = false;
            break;
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] != arr[n-i-1]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }*/

    /*largest word in a sentence
    int n;
    cin>>n;
    cin.ignore();  //To ignore buffer in inline function
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int count = 0;
    int ans = INT_MIN;

    /*for(int i = 0; i < n; i++){
        if(arr[i] == ' ' || arr[i] == '\0'){
            count = 0;
            continue;
        }
        count++;
        ans = max(ans,count);
    }/

    int i = 0;
    while(true){
        if(arr[i] == ' ' || arr[i] == '\0'){
            count = 0;
        }else{
            count++;
        }
        ans = max(ans,count);
        if(arr[i] == '\0'){
            break;
        }
        i++;   
    }
    cout<<ans;*/





    return 0;

}