#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
        int idx=-1;
        int n = nums.size();
        
        for(int i=n-1; i>0; i--){
            if(nums[i]>nums[i-1]){
                idx=i;
                break;
            }
        }
        
        if(idx==-1){
            reverse(nums.begin() , nums.end());
            
        }
        else{
           int prev= idx;
            for(int i=idx+1 ;i<n; i++){
                
                if(nums[i]>nums[idx-1] and nums[i]<=nums[prev]){
                    prev=i;
                    
                }
            }
            
            swap(nums[idx-1] , nums[prev]);
            reverse(nums.begin()+idx , nums.end());
        }
        
    }
    
int main(){

    vector<int> nums;

    int n , x;
    cout<<"Enter number of elements  : ";
    cin>>n;

    for(int i=0; i<n ;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>x;

        nums.push_back(x);
    }

    for(int i=0;i<nums.size();i++){
        cout<<nums.at(i)<<" ";      //cout<<nums[i]<<" ";
 

      }
      cout<<endl;
    nextPermutation(nums);

    cout<<"Next permutation: ";
     for(int i=0;i<nums.size();i++){
        cout<<nums.at(i)<<" ";     
 

      }




}
