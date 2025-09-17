#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        int cumSum=0;
        int count=0;
        mpp.insert({0,1});

        for(int i=0; i<nums.size(); i++) {
            cumSum+=nums[i];

            if(mpp.find(cumSum-k) !=mpp.end()) {
                count += mpp[cumSum-k];
            }

            mpp[cumSum]++;
        }
        return count;
    }
};