#include<bits/stdc++.h>
using namespace std;
#define forl(i,n) for(int i = 0;i<n;i++)

long long solve(int arr[], int n){
        // Your code here
        int sum = 0,MAX = INT_MIN;
        forl(i,n){
            sum +=arr[i];
            MAX = max(MAX,sum);
            if(sum < 0){
                sum = 0;
            }
        }
        return MAX;
}

int main(){
    int n = 5;
    int arr[5] = {1,2,3,-2,5};
    cout<<solve(arr,n)<<"\n";
}
