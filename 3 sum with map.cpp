#include<bits/stdc++.h>
#include<map>
#include<string>
using namespace std;
int main(){
string a,b,c;
int i ,j ,k ,n;
n=6;
map<string,bool>mp;
int arr[]={-1,0,1,2,-1,4};
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        for(k=j+1;k<n;k++){
            stringstream s1,s2,s3;
            s1 << arr[i];
                a = s1.str();
                s2 << arr[j];
                b = s2.str();
                s3 << arr[k];
                c = s3.str();
            if(arr[i]+arr[j]+arr[k]==0 && !mp[a+b+c]){
                mp[a+b+c] = true;
                mp[a+c+b] = true;
                mp[b+a+c] = true;
                mp[b+c+a] = true;
                mp[c+a+b] = true;
                mp[c+b+a] = true;
                cout<<a<<' '<<b<<' '<<arr[k]<<endl;
            }
        }
    }
}
}
