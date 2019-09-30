#include <iostream>
using namespace std;
int main(){
    int a[]={2,8,11,15,7};
    int n=5;
    int k=9;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==k){
                cout<<i<<j;

            }
        }
    }
    // cout<<"element:"<<a[1];
}
