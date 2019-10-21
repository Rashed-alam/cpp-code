#include <bits/stdc++.h>
#include <string>
using namespace std;

void func(string& s,int i=0){
        int a=s.size();
        if(i==a/2){
        return;
        }
        char temp=s[i];
        s[i]=s[a-i-1];
        s[a-i-1]=temp;
        func(s,i+1);
}
int main(){
string s;
cin>>s;
func(s);
cout<<s;
}
