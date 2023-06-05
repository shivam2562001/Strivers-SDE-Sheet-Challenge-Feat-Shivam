#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
       int  breakpoint = nums.size()-1;

        while(breakpoint>0 && nums[breakpoint]<=nums[breakpoint-1]) breakpoint--;

        if(--breakpoint<0)reverse(nums.begin(),nums.end());
        else{
           for(int j=nums.size()-1;j>breakpoint;j--){
               if(nums[j]>nums[breakpoint]){
                   swap(nums[j],nums[breakpoint]);
                   break;
               }
           }
          reverse(nums.begin()+breakpoint+1,nums.end());
        }
     return nums;
       
}