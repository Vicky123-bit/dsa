#include<iostream>
using namespace std;
int sumofdigits( int num){
    int digitsum=0;
    while(num>0){
       int lastdig=num%10;
       num=num/10;
       digitsum=digitsum+lastdig;




    }
    return digitsum;
}
int main(){
    cout<<sumofdigits(1459)<<endl;
    return 0;

}