#include <algorithm>
#include<iostream>
#include <utility>
#include <valarray>
#include<vector>
using namespace std;

class Solution
{
    public:
        bool containsNearbyDuplicate(vector<int>& nums, int k, int t)
        {
            vector<pair<int,int>>s;
            for(int i=0;i<nums.size();i++)
            {
                s.push_back(make_pair(nums[i],i));
            }
            sort(s.begin(),s.end());
            for(int i=0;i<s.size()-1;i++)
            {
                if(abs((s[i].first-s[i+1].first))<=t and abs((s[i].second-s[i+1].second))<=k)
                    return true;
            }
            return false;
        }
};

int main()
{
    vector<int>s={1,0,1,1};
    Solution a;
    cout<<a.containsNearbyDuplicate(s,1,2);
}