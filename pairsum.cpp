#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum( vector<int> nums,int target){
    vector<int> ans;
    int n=nums.size();
    int i=0, j=n-1;
    while(i<j){
        
        int ps =nums[i]+nums[j];
        if(ps>target){

            j--;
        }
        else if(ps<target){
            i++;

        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;

        }          
        
    }
     return ans;

}
int main(){

    vector<int> nums={2,7,8,9};
    
    int target=10;
vector<int>ans= pairsum(nums,target);
cout<<ans[0]<<","<<ans[1]<<endl;
return 0;


}

