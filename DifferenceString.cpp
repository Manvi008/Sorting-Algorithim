#include<bits/stdc++.h>
using namespace std ;


    char findTheDifference(string s, string t) {
        int sum1 =0;
        int sum2 = 0 ;
       for(char c: s){
         sum1+= int(c);  
       }
       for(char c: t){
         sum2+= int(c);  
       }
       return char(sum1-sum2);
    }

 int main(){
 string s = "stte";
string t = "st";
cout<<findTheDifference(s,t);
  
 return 0 ;
 }
