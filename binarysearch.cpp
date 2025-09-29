#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> arr,int tar){
    int st=0,end=arr.size()-1;
    while(st<=end){
       int  mid=(st+end)/2;
        if(tar>arr[mid]){
           st=mid+1;//2nd half
        }
        else if(tar<arr[mid]){
            end=mid-1;   //isthalf
        } else{
            return mid;
        }
    }
    return -1;


}
int main(){
    vector<int> arr1={1,2,3,4,5,10,12};
    int tar=0;
    cout<<binarysearch(arr1,tar)<<endl;
    
  return 0;
}