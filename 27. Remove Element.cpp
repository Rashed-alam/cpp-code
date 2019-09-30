#include <iostream>
using namespace std;
int main(){
   // cout<<"hello";
      int i,j,n,p,k,sum=0;

int a[]={0,1,2,2,3,2,2,0,4,2};
  k=2;
  n=10;
 for(i=0;i<n;i++){
    if(a[i]==k){
    for(j=i;j<n;j++){
        a[j]=a[j+1];
    }
       n=n-1;
       i=i-1;
    }
   // n=n-1;
    //i=i
 }
  for(i=0;i<n;i++){
    cout<<a[i];
  }
  // sum=n;

}
