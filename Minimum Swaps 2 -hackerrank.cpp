#include<bits/stdc++.h>
using namespace std;

int main(){
      int n,x,cnt;
      while(cin>>n){
        cnt=0;
      int ara[n+5];
      int index[n+5];
      for(int i=1;i<=n;i++){
            cin>>ara[i];
            index[ara[i]]=i;
      }
      for(int j=1;j<=n;j++){
        int a = index[j];
        int b = index[ara[j]];
        int temp = ara[a];
        if(a!=j) {
            cnt++;
            index[ara[j]] = index[j];
            index[j] = j;
            ara[a] = ara[b];
            ara[b] = temp;
        }
        }
      cout<<cnt<<endl;
      }
}
