
#include <bits/stdc++.h>
using namespace std;
int main()
{   string a;
    getline(cin,a);
    int k=a.size();
    cout<<a<<endl;
    cout<<k;
    for(int i=0;i<k/2;i++){
        char t=a[i];
        a[i]=a[k-i-1];
        a[k-i-1]=t;
    }

cout<<a;

}
