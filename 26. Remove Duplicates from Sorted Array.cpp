
#include <iostream>
using namespace std;
int main() {
  int i,j,n,p,k,sum;

  cin>>n;
    int a[n];
    sum=n;
  for(i=0;i<n;i++){
    cin>>a[i];
  }


  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(a[i]==a[j]){
        for(p=j;p<n;p++){
          a[p-1]=a[p];
         // cout<<a[j]<<' '<<;


        }
            n=n-1;
         cout<<"inner"<<n;
         j=j-1;
           // cout<<"inner sum"<<sum <<' ';
      }



    }
//    cout<<endl;
//    cout<<"outer sum"<<sum<<' ';
  }
cout<<"most"<<n<<' ';
 // cout<<n<<endl;
   for(i=0;i<n;i++){
    cout<<"output"<<a[i]<<' ';
}
  //std::cout << "Hello World!\n";
}
