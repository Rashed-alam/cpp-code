#include <bits/stdc++.h>
using namespace std;
int main(){
int i,j,k,left,right,ans;

int a[]={-1,-4,1,2};
int n=4,target=1;
int min_res=a[0]+a[1]+a[2];
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
for(k=0;k<n-2;k++){
        left=k+1;
        right=n-1;
    while(left<right){
            ans=a[k]+a[left]+a[right];
        if(ans==target){
            cout<<ans<<k;
        }
    else if(ans<target){
        left++;
    }
    else{
        right--;
    }
    if(abs(ans-target)<abs(min_res-target)){
        cout<<"target :"<<min_res<<" "<<ans<<endl;
        min_res=ans;

//  cout<<min_res;
//        cout<<"ans2"<<min_res<<a[k]<<" "<<a[left]<<" "<a[right];
    }
    }

}
cout<<"ans 1 :"<<min_res;
 // cout<<"ans3"<<min_res<<a[k]<<" "<<a[left]<<" "<a[right];
}
