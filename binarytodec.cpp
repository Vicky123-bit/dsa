#include<iostream>
using namespace std;
int bitodec( int binum){
    int ans=0,pow=1;
    while(binum>0){
        int rem= binum%10;
        binum=binum/10;
       ans=ans+(rem*pow);
       pow*=2;

    }
    return ans;
}
int main(){
    cout<< bitodec(110)<<endl;
    return 0;
}