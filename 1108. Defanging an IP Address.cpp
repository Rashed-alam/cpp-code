#include <bits/stdc++.h>
using namespace std;
int main(){
string a,b;
int cnt=0;
a="255.155.1.1";
int n=a.length();
for(int i=n-2;i>=0;i--){
        if(a[i+1]=='.'){
           a=a.substr(0,i+1)+"[.]"+a.substr(i+2);
        }

}
cout<<a;
}
