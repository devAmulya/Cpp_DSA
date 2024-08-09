#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    /*Matrix Transpose

    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"Before Transpose : "<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    cout<<"After Transpose : "<<endl;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }*/

    /*Matrix Multiplication
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int arr1[n1][n2];
    cout<<"First Matrix input : "<<endl;
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Second Matrix input : "<<endl;
    int arr2[n2][n3];
    for(int i = 0; i < n2; i++){
        for(int j = 0; j < n3; j++){
            cin>>arr2[i][j];
        }
    }
    int arr3[n1][n3];
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n3; j++){
            arr3[i][j] = 0;
            for(int k = 0; k < n2; k++){
                arr3[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }

    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n3; j++){
            cout<<arr3[i][j]<<" ";
        }cout<<endl;
    }*/

    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    int e;
    cout<<"Enter element to search : "<<endl;
    cin>>e;
    int i = 0;
    int j = n-1;
    bool flag = false;
    while(i<n&&j >= 0){
        if(arr[i][j] == e){
            cout<<"Element found at : "<<i<<" "<<j;
            flag = true;
            break;
        }else if(arr[i][j] > e){
            j--;
        }else if(arr[i][j] < e){
            i++;
        }
    }
    if(flag == false){
        cout<<"Not found ";
    }


}