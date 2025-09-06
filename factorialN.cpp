#include<iostream>
using namespace std;
int factn(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
   

    }
    return fact;
}
int main(){
cout<<factn(5)<<endl;
    
}

