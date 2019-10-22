#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{
    int i=0,j=0,k=0,n;
    n=8;
    int a[]={4,3,2,7,8,2,3,1};
    int count[8];
    map<int,bool>mp;

for(i=0;i<8;i++){
    count[i]=0;
}


for(j=0;j<n;j++){
    count[a[j]]++;

}



for(i=0;i<n;i++){
        k=a[i];
    if(count[a[i]]==2 && !mp[k]){
         mp[k]=true;
        cout<<a[i]<<' ';
    }

}
//for(j=0;j<n;j++){
//        k=a[j];
//       if(count[a[j]]==2 && !mp[k]){
//            mp[k]=true;
//           cout<<a[j]<<' ';
//        }
//    }

}

