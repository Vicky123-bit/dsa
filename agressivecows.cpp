#include<iostream>
#include<vector>
using namespace std;
bool ispossible(vector<int> &arr, int N,int C, int minalloweddistace){
    int cows=1,laststallpos=arr[0];
    for(int i=1;i<N;i++){
        if(arr[i]-laststallpos>=minalloweddistace){
            cows++;
            laststallpos=arr[i];
        }if(cows==C)return true;
    }
    return false;
}
int getdistance(vector<int> &arr, int N,int C){
    sort(arr.begin(),arr.end());
    int st=1, end=arr[N-1]-arr[0],ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(ispossible(arr, N,C,mid)){//right
            ans=mid;
            st=mid+1;
        }else{//left
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    int C=3, N=5;
    vector<int> arr={1,2,8,4,9};
    cout<< getdistance(arr,N,C)<<endl;
    return 0;

}
