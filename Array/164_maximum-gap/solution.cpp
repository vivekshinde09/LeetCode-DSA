#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> nums={3,6,9,1};
    sort(nums.begin(),nums.end());
    for(auto val:nums){
        cout<<val<<" ";
    }
    int length=nums.size();
    int max_diff=0;
    int i=0;
        while(i<=length-2){
            int diff=nums[i+1]-nums[i];
            if (diff>max_diff){
                max_diff=diff;
            }
            i++;
        }
        cout<<"\n";
    
    return max_diff;
}