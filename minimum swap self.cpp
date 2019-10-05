#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n,a,cnt=0;
    cin>>n;
    int arr[n+5];
   int  index [n+5];
    for(i=1;i<=n;i++){
        cin>>arr[i];
        index[arr[i]]=i;
    }

//      for(i=1;i<=n;i++){
//       // cout<<arr[i]<<" ";
//      //  cout<<index[i]<<" ";
//    }
    for(int j=1;j<=n;j++){

           int temp=arr[j];
           a=arr[index[j]];s
           if(a!=j){
                cnt++;
                index[arr[j]]=index[j];
                index[j]=j;
                arr[a]=arr[index[j]];
                arr[index[j]]=temp;
           }
          // index[j]=j;
    }
    cout<<"result: "<<cnt<<endl;
   // int temp=arr[j];

}
//4
//4 3 1 2
