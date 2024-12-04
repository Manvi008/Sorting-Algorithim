#include<bits/stdc++.h>
using namespace std ; 
int main(){
    int  arr[5] = {34 , 12 , 76 , 99 ,4};
    for(int i = 0 ;  i < 4 ; i++){
        for(int j = 0 ; j < 5-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i= 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}

/*Output : 4 ,12,34,76,99*/
