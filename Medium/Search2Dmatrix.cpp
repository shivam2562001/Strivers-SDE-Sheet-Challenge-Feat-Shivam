int  binary_search(vector<int> arr,int target){

     int start = 0;
     int end = arr.size()-1;
     while(start<=end){
       int mid = start +( end-start)/2;
       if(arr[mid]==target){
           return true;
       }else if(arr[mid]<target){
           start=mid+1;
       }else end = mid-1;

     }

     return false;
} 


bool searchMatrix(vector<vector<int>>& mat, int target) {
       
       for(auto arr : mat){
           if(binary_search(arr,target)) return true;
       }

       return false;
}

//low=0;
//high = m*n-1;
//matrix[middle/m][middle%m]