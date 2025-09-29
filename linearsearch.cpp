#include<iostream>
using namespace std;
int linearsearch(int arr[], int sz, int target){
    for(int i=0;i<sz;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
int arr[]={2,4,5,6,8};
int sz=5,target=8;
cout<<linearsearch(arr, sz,target)<<endl;

return 0;
}