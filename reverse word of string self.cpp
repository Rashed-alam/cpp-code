#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[14]="I love you";
    char b[14];
    int i=0,j=0,k=0,l=0;

    for(i=0;i<=sizeof(a);i++){

        if(a[i]==' '||a[i]=='\0'){

            for(j=i-1;j>=l;j--){
                b[k++]=a[j];
            }
            b[k++]=' ';
            l=i+1;
        }
    }
    cout<<b;

}
