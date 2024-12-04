#include<bits/stdc++.h>
using namespace std ; 
int main(){
    int  arr[5] = {34 , 12 , 76 , 99 ,4};
    for(int i = 0 ;  i < 4; i++){
        int min_idx = i;
        for(int j = i+1; j < 5 ; j++){
            if(arr[j]<arr[min_idx]){
                min_idx = j ;
             swap(arr[i],arr[min_idx]);  
            }
            
        }
         
    }
    for(int i= 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}
