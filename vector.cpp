#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3};
    vec.push_back(21);
   //cout<<vec[0];
   for(int i: vec){
    cout<<i<<" ";
   }
   


    
    return 0;
}