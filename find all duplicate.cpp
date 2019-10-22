
#include <bits/stdc++.h>
#include <map>
using namespace std;
int main(){
    vector<int>num={4,3,2,7,8,2,3,1};
    vector<int>ans={};
    map<int,bool>mp;
    int n=num.size();
    for(int i=0;i<n;i++){
        ans[num[i]]++;
    }
     for(int i=0;i<n;i++){
        cout << ans[i];
    }

}
