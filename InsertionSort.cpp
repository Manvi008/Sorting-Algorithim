#include<bits/stdc++.h>
using namespace std ; 
int main(){
    int arr[5]= {1,6,4,2,1};
    for(int i = 1 ; i < 5 ; i++){
        int current_pos = arr[i];
        int j = i-1;
        while(arr[j]>current_pos&&arr[j]>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = current_pos;
    }
    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}
