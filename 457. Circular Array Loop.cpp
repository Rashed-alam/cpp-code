#include<iostream>
using namespace std;
int main(){
int arr[]={2,-1,1,2,2};
int n =5,i=0;
int k[n];
bool a=false;


while(i<=n){
//     cout<<i<<" ";
//     cout<<arr[i]<<endl;
       // cout<<i<<' '<<arr[i]<<" "<<k[i]<<endl;
 int j=arr[i];

 if(j>0){
         i+=j;
          if(i==n){
    a=true;
   // return a;
 }
 }
 else {
    i=-(i-j);
     if(i==n){
    a=true;
   // return a;
 }
 }


//else if(j<0){
//    int m=arr[j];
//    i=j-m;
//}

}
cout<<a;
}
