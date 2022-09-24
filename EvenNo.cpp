//Find numbers with even number of digits
#include<iostream>
#include <string>
#include<vector>
using namespace std;

int findNumbers(vector<int>& nums)
{
    int c=0;
    for(auto i=0;i<nums.size();i++)
    {
        string s=to_string(nums[i]);
        if(s.size()%2==0)
        {
            c++;
        }
    }
    return c;
} 