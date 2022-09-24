//Find the max consecutive Ones
#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums)
{
    int c=0,n=0;
    for(auto i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
        {
            c=0;
        }
        else
        {
            c++;
            n=max(n,c);
        }
    }
    return n;
}
