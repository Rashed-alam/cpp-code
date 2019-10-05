#include<bits/stdc++.h>
using  namespace std;


class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int left,right,min_res=nums[0]+nums[1]+nums[2],ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            left=i+1;
            right=nums.size()-1;
            while(left<right)
            {
            ans=nums[i]+nums[left]+nums[right];
            if(ans==target)
                return target;
            else if(ans<target)
            {
                left++;
            }
            else
            {
                right--;
            }

             if(abs(ans-target)<abs(min_res-target))
                 min_res=ans;

            }


        }
        return min_res;
    }
};
