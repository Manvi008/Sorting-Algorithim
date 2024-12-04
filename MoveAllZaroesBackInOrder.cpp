#include<bits/stdc++.h>
using namespace std ; 
int main(){
    int arr[6] = {0,5,0,3,42};
    for(int i = 0 ; i<6 ; i ++){
        for(int j = 0;j <6-i-1;j++){
            if((arr[j])==0&& (arr[j+1]!=0)){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i = 0 ; i < 6 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}
/*Hint - Use Bubble Sort */
/*O/P - 5 , 3 , 42 , 0 , 0 , 0*/
