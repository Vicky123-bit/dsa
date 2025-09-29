//find smaleest/largest in array
#include<iostream>
using namespace std;
int main( )
{
int nums[]={1,37,45,-6,-9};
int size=5;

int smallest=INT_MAX;
for(int i=0;i<size;i++){
    if(nums[i]<smallest){
        smallest=nums[i];

    }


}
cout<<"smalest="<<smallest<<endl;

}