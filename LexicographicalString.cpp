#include<bits/stdc++.h>
using namespace std ;
void SelectionSort(char fruit[][60], int n){
    for(int i = 0 ; i < n ; i++){
        int min_index = i ;
        for(int j = i+1 ; j < n ; j++){
            if((strcmp(fruit[min_index] ,fruit[j]))>0){
                min_index = j ;
            }
        }
        if(i!= min_index){
            swap(fruit[i],fruit[min_index]);
           /* char temp[60];
            strcpy(fr)*/
        }
    }
    return;
}
 int main(){
     char fruit[][60] ={"papaya","lime","watermelon","apple","mango","kiwi"};
     int n = sizeof(fruit)/sizeof(fruit[0]);
     SelectionSort(fruit , n );
     for(int i = 0 ; i < n ; i++){
         cout<<fruit[i]<<" ";
     }
 return 0 ;
 }
