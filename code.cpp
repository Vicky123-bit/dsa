// #include <iostream>
// using namespace std;
// int main () 
// {
//    int n=4;
//    for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         cout<<j<<" ";
//     }
//     cout<<endl;
//    }
    



// return 0; 
// }
#include<iostream>
using namespace std;

int sumofn(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
   
        sum=sum+i;
    }
    return sum;
}
int main(){
    cout<<sumofn(5);

    return 0;
}

