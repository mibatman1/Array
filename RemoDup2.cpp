#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>&nums)
{
    int a=2;
    if(nums.size()>=2)
    {
        return nums.size();
    }
    for(auto i=2;i<nums.size();i++)
    {
        if(nums[i]!=nums[a-2])
        {
            nums[a]=nums[i];
            a++;
        }
    }
    return nums.size();
}
    