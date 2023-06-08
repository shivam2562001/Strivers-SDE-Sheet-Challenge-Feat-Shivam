#include <bits/stdc++.h> 

using ll = long long;

long long merge(long long *arr,ll start,ll mid,ll end){
     
    ll left = start;
    ll right = mid+1;
    ll count=0;
    vector<ll> sorted;
       while(left<=mid && right<=end){
           if(arr[left]<=arr[right]){
              sorted.push_back(arr[left]);
              left++;
           }else{
               sorted.push_back(arr[right]);
               count+=(mid-left+1);
              right++;
           }
       }

       while(left<=mid){
           sorted.push_back(arr[left]);
              left++;
       }
       while(right<=end){
           sorted.push_back(arr[right]);
              right++;
       }

       for(ll i=start;i<=end;i++){
           arr[i] = sorted[i-start];
       }
     
    return count;
}



long long mergeSort(long long *arr,ll start,ll end){
     ll count =0;
     if(start>=end) return count;
     ll mid = (start + end)/2;
     count += mergeSort(arr,start,mid);
     count += mergeSort(arr,mid+1,end);
     count += merge(arr,start,mid,end);

     return count;
}

long long getInversions(long long *arr, int n){
    // Write your code here.
  
    ll cnt = mergeSort(arr,0,n-1);

      return cnt;
}