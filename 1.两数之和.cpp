/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include<bits/stdc++.h>
using namespace std;


// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int oth = 0;
        int r = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            oth = target - nums[i];
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] == oth) 
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    r = 1;
                    break;
                }
            }
                if (r) {break;}
            
        }
        return ans;

    }
};
// @lc code=end

