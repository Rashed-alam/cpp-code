#include <iostream>
using namespace std;
int main(){
    int i,j,k,n;
    n=6;
    int a[]={-1,0,1,-2,2,3};
    // -1,0,1,-2,2,3
    // -1, 0, 1, 2, -1, -4
//    for(i=0;i<n;i++){
//        cin>>a[i];
//    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==0){
                    cout<<a[i]<<a[j]<<a[k]<<endl;
                }
            }
        }
    }
}
