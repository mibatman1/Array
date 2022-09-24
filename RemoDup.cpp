//Remove Duplicates from the sorted array.
#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution
{
    public:
        int removeDuplicates(vector<int>& nums)
        {
            set<int>s;
            for(auto it:nums)
            {
                s.insert(it);
            }
            nums.clear();
            for(auto i=s.begin();i!=s.end();i++)
            {
                nums.push_back(*i);
            }
            return nums.size();
        }
};


class Solution1
{
    public:
        int removeDuplicates(vector<int>& nums)
        {
            int a=1;
            for(auto i=1;i<nums.size();i++)
            {
                if(nums[i]!=nums[i-1])
                {
                    nums[a++]=nums[i];
                }
            }
            return a;
        }
};


int removeDuplicates(vector<int>& nums)
{
    int a=1;
    for(auto i=1;i<nums.size();i++)
    {
        if(nums[i]!=nums[i-1])
        {
            nums[a++]=nums[i];
        }
    }
    return a;
}

int main()
{
    vector<int>s={1,1,2,2,3,3,4};
    cout<<removeDuplicates(s);
}