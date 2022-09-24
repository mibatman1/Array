//Buy And Sell Stock
#include <algorithm>
#include<bits/stdc++.h>
#include <utility>
using namespace std;

class Solution
{
    public:
        int maxProfit(vector<int>& prices)
        {
            int pr=0;
            pair<int,int>d;
            d=make_pair(prices[0],0);
            for(auto i=1;i<prices.size();i++)
            {
                if(d.first>prices[i])
                {
                    d=make_pair(prices[i],i);
                }
            }
            pr=d.first;
            for(auto i=d.second+1;i<prices.size();i++)
            {
                if(d.first<prices[i])
                {
                    d=make_pair(prices[i],i);
                }
            }
            return d.first-pr;
        }
};

int main()
{
    Solution s;
    vector<int>prices={2,4,1};
    cout<<s.maxProfit(prices);
}
