#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}

int main(){
    int n=5;
    int arr[]={2,5,3,6,1};
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];

    }
    return 0;
}