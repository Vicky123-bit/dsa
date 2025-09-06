#include<iostream>
using namespace std;
int dectobi( int decnum){
    int ans=0,pow=1;
    while(decnum>0){
        int rem= decnum%2;
        decnum=decnum/2;
       ans=ans+(rem*pow);
       pow*=10;

    }
    return ans;
}
int main(){
    cout<< dectobi(50);
    return 0;
}