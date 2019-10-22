#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={3,4,2,3};
    bool m=false;
        for (int i=1; i < nums.size(); i++){
            if (nums[i-1]<=nums[i]) continue;
            int temp=nums[i-1];
            nums[i-1]=nums[i];
            if (is_sorted(nums.begin(),nums.end())) return m=true;
            nums[i-1]=nums[i]=temp;
            return is_sorted(nums.begin(),nums.end());
        }
        return m=true;
    }

//        int cnt=0;
//        int vnt=0;
//        bool M;
//        for(int i=0;i<n;i++){
//            if(i+1!=n){
//                    if(nums[i]>=nums[i+1]){
//                    cout<<nums[i]<<" "<<nums[i+1]<<endl;
//                cnt++;
//            }
//            else{
//           vnt++;
//            }
//            }
//
//
//        }
//cout<<cnt<<" "<<vnt;
//        if(cnt==1){
//            cout<< "true";
//        }
//        else{
//              cout<< "false";
//        }
//





