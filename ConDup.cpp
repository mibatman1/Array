#include <algorithm>
#include<iostream>
#include <unordered_set>
#include<vector>
using namespace std;

class Solution
{
    public:
        bool containsDuplicate(vector<int>& nums)
        {
            sort(nums.begin(),nums.end());
            for(int i=1;i<nums.size();i++)
            {
                if(nums[i]==nums[i-1])
                {
                    return true;
                }
            }
            return false;
        }
};