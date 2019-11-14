#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i=0,j=0,k=0,l=0;
    char x[14]= "I EVOL GNIDOC";
    char y[14];
    for(i=0;i<=sizeof(x);i++)
    {
          if(x[i]==' ' || x[i]=='\0')
          {
            for(j=i-1;j>=l;j--){
                    cout<<i<<l<<endl;
                     y[k++]=x[j];
                     }
                y[k++]=' ';
                l=i+1;


          }
    }
    cout<<y<<"\n";
   cout<<sizeof(y);
    return 0;
}
