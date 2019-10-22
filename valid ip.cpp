#include <bits/stdc++.h>
using namespace std;
int main(){
string a,b;
int cnt=0;
a="255.155.1.1";
int n=a.length();
for(int j=0;j<n;j++){
    if(a[j] == '.'){
        cnt++;
    }
}
int m=n+cnt*2;
for(int i=0,j=0;i<m;i++){
    if(a[i]!='.'){
        b[j]=a[i];
        j++;
    }
    else {
        b[i+1]='[';
        b[i+2]='.';
        b[i+3]=']';
        j+=3;

    }
}
for(int k=0;k<m;k++){
    cout<<b[k];
}

}
