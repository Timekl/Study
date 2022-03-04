/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 1;
        int num = 1;
        int k = 0;
        if (s == "") {
            return 0;
        }
        for (int i = 1; i < s.size(); i++)
        {
            for (int j = k; j < i; j++)
            {
                if (s[i] == s[j])
                {
                    num = i - j - 1;
                    k = j + 1;
                    break;
                }
            }
            num = num + 1;
            if (num > max) {max = num;}
        }
        return max;
    }
};
// @lc code=end

