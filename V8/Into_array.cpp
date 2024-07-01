#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    /*int n;
    cin>>n;

    int array[n];
    for(int i = 0;i<n;i++){
        cin>>array[i];
    }

    for(int i = 0; i < n; i++){
        cout<<array[i]<<" ";
    }*/

   /*max&min of array

   int n;
   cin>>n;

   int arr[n];

   for(int i = 0; i < n; i++){
    cin>>arr[i];
   }

   int max = arr[0];
   int min = arr[0];
   for(int i = 0; i < n; i++){
    if (arr[i] > max){
        max = arr[i];
    }
    if (arr[i] < min){
        min = arr[i];
    }
   }

    cout<<"min : "<<min<<" ; max :  "<<max;*/
    
    int n;
   cin>>n;

   int arr[n];

   for(int i = 0; i < n; i++){
    cin>>arr[i];
   }

   int maxno = INT_MIN;
   int minno= INT_MAX;
   for(int i = 0; i < n; i++){
        maxno = max(maxno,arr[i]);
        minno = min(minno,arr[i]);
   }

    cout<<"min : "<<minno<<" ; max :  "<<maxno;

    return 0;
}