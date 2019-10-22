#include <bits/stdc++.h>
using namespace std;
int main(){
int a[]={1,3,2,4,6,5};
int n=6;
int b[3];
int i=0,j=0;
int sum=0;
for(int k=0;k<n;k++){
    for(int l=0;l<n;l++){
        if (a[k]>a[l]){
            int temp=a[l];
            a[l]=a[k];
            a[k]=temp;
        }
    }
}
while(i<n){
    if(a[i]<a[i+1]){
        b[j]=a[i];
        j++;
    }

    else if(a[i]>a[i+1]){
        b[j]=a[i+1];
        j++;
    }
    i+=2;
}
for(int k=0;k<3;k++){
    sum +=b[k];
}
cout<<sum;
}
