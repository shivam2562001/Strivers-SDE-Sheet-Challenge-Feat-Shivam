#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
   
        long long maxend=0;
        long long maxfar=INT_MIN;
 
        for(int i=0;i<n;i++)
        {    maxend+=arr[i];
            if(maxend<0){
               maxend=0;
            }

            if(maxend>maxfar){
                maxfar=maxend;
            }

        }

        return maxfar;
}