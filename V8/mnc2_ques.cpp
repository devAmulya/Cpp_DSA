#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;

bool pair_sum(int arr[], int n, int t){
    int i = 0, j= n-1;
    while(i<=j){
        if(arr[i]+arr[j] == t){
            return true;
        }else if(arr[i] + arr[j] < t){
            i++;
        }else if(arr[i] + arr[j] > t){
            j--;
        }
    }
    return false;
}

int kadane(int arr[],int n){
    int currsum = 0;
    int maxsum = INT_MIN;
    for(int i = 0; i < n; i++){
        currsum += arr[i];
        maxsum = max(maxsum,currsum);
        if(currsum < 0){
            currsum = 0;
        }
    }
    return maxsum;
}

int main(){

    //SUBARRAYS
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    /*Printing all subarrays
    for(int i = 0 ; i < n; i++){
        for(int j = i; j <= n-1; j++){
            for(int k = i; k <= j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }*/

    // Maximum Subarray Sum

    /*(i) Brute Force(O(n^3) & O(n^2) )
    int max = INT_MIN;
    int sum = 0, start = -1, end  = -1;
    for(int i = 0 ; i < n; i++){
        for(int j = i; j <= n-1; j++){
            sum = 0;
            for(int k = i; k <= j; k++){
                sum += arr[k];
                if(max < sum){
                    start = i; 
                    end = j;
                    max = sum;
                }
            }
        }
    }
    int max = INT_MIN;
    int sum = 0, start = -1, end  = -1;
    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            if(max < sum){
                    start = i; 
                    end = j;
                    max = sum;
                }
            }
        }
    cout<<start<<" "<<end<<" "<<max;*/

    /*(ii) Cumulutative Sum approach
    int sum = 0;
    int currsum[n];
    for(int i = 0; i < n; i++){
        sum += arr[i];
        currsum[i] = sum;
    }
    int maxsum = INT_MIN;
    for(int i = 0; i < n; i++){
        maxsum = max(maxsum,currsum[i]);
    }
    for(int i = 0; i <n; i++){
        sum = 0;
        for(int j = 1; j <=i; j++){
            sum = currsum[i] - currsum[j];
            maxsum = max(maxsum,sum);
        }
    }

    cout<<maxsum;*/

    /*(iii)Kadane Algorithm(O(n))
    int currsum = 0;
    int maxsum = INT_MIN;
    for(int i = 0; i < n; i++){
        currsum += arr[i];
        maxsum = max(maxsum,currsum);
        if(currsum < 0){
            currsum = 0;
        }
    }
    cout<<maxsum;*/


    //Maximum Circular subarray sum
    int wrap, totalsum = 0;
    int nonwrap;
    nonwrap = kadane(arr,n);
    for(int i = 0; i < n; i++){
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    wrap = totalsum + kadane(arr,n);
    cout<<wrap;
    cout<<max(wrap,nonwrap);

    /*Pair Sum
    sort(arr,arr+n);
    int t = 31;
    cout<<pair_sum(arr,n,t);*/

    return 0;

}