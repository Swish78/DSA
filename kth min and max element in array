#include <bits/stdc++.h>
using namespace std;
#define forl(i,n) for(int i = 0;i<n;i++)
#define Num(s) sizeof(s)/sizeof(*s)

// TC- O(NlogN)
inline void solve(int arr[],int k,int size,int &c,int &b){
    if(k>size){
        cout<<"K off the limits."<<"\n";
        return;
    }
    sort(arr,arr+size);
    // cout<<"This is kth min element -> "<< arr[k-1]<<"\n";
    // cout<<"This is kth max element -> "<< arr[size - k]<<"\n";
    c = arr[k-1];
    b = arr[size - k];
    
}

// TC - O(N)
int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> ns;
        for(int i = 0;i<k;i++)
        ns.push(arr[i]);
        for(int i = k;i<r+1;i++){
            if(ns.top()>arr[i]){
                ns.pop();
                ns.push(arr[i]);
            }
        }
        return ns.top();
}
int main(){
    int arr[] = {23,54,62,91,87,20,11};
    // sorted -> 11 20 23 54 62 87 91 
    int size = Num(arr),Kmin,Kmax;
    int k = 3; // I have assumed k = 3
    solve(arr,k,size,Kmin,Kmax);
    cout<<"This is kth min element -> "<< Kmin<<"\n";
    cout<<"This is kth max element -> "<< Kmax<<"\n";
    cout<< kthSmallest(arr,0,size-1,k)<<"\n";
    return 0;
}
