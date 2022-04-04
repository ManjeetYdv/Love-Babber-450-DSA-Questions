#include<bits/stdc++.h>
using namespace std;


 int search(vector<int>& nums, int target) {
      
     int low=0;
     int high= nums.size()-1;
     int mid;
    while(low<=high){
        
        mid = (high+low)/2;
        
        if(nums[mid]==target){
            return mid;
        }
        
        if(nums[low]<=nums[mid]){   //left is sorted
            
            
            if(nums[low]<=target and nums[mid]>target){ //if target is in left
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            
            if(nums[mid]<= target and nums[high]>=target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        
    }
        return -1;
}

int main(){
    vector<int> nums = {4,5,6,7,0,1,2};
    int pos =search(nums , 0);
    cout<<pos;
}
