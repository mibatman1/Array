//Sqaure of the sorted array.
#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

vector<int> sortedSquares(vector<int>& nums)
{
    for(auto i=0;i<nums.size();i++)
    {
        nums[i]=nums[i]*nums[i];
    }
    sort(nums.begin(),nums.end());
    return nums;
}