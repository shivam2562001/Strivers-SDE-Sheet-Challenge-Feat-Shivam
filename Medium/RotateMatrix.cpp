#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int top=0;
    int left=0;
    int right=m-1;
    int bottom=n-1;
    int curr=0,prev=0;
    while(top<=bottom && left<=right){
        if(top==bottom || left == right) break;
       prev = mat[top+1][left];
        for(int i=left;i<=right;i++){
            curr=mat[top][i];
            mat[top][i]=prev;
            prev=curr; 
        }
        top++;
        
         for(int i=top;i<=bottom;i++){
            curr=mat[i][right];
            mat[i][right]=prev;
            prev=curr; 
        }
        right--;

        if(top<=bottom){
           for(int i=right;i>=left;i--){
            curr=mat[bottom][i];
            mat[bottom][i]=prev;
            prev=curr; 
            }
            bottom--;
        }
        if(left<=right){
            
         for(int i=bottom;i>=top;i--){
            curr=mat[i][left];
            mat[i][left]=prev;
            prev=curr; 
          }
          left++;
        }
    }  

}