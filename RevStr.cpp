#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
        void reverseString(vector<char>& s)
        {
            int d=0,a=s.size()-1;
            while(d<a)
            {
                swap(s[d],s[a]);
                d++;
                a--;
            }
            for(auto i:s)
            {
                cout<<i<<" ";
            }
        }
};

int main()
{
    Solution s;
    vector<char>f={'H','a','a','n','a','h'};
    s.reverseString(f);
}