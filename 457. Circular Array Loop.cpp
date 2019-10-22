#include<iostream>
using namespace std;
int main(){
int arr[]={2,-1,1,2,2};
int n =5,i=0;
int k[n];
bool a=false;


    while(i<=n){
 int j=arr[i];

 if(j>0){
         i+=j;
          if(i==n){
    a=true;
 }
 }
 else {
    i=-(i-j);
     if(i==n){
    a=true;
 }
 }

}
cout<<a;
// }

}
