// Input: num = [1,2,0,0], k = 34
// Output: [1,2,3,4]
// Explanation: 1200 + 34 = 1234
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution
{
    public:
        vector<int> addToArrayForm(vector<int>& num, int k)
        {
            string d;
            vector<int> ou;
            int out;
            for(auto s:d)
            {
                d.append(to_string(s));
            }
            out=stoi(d)+k;
            string g=to_string(out);
            for(auto f:g)
            {
                ou.push_back(f);
            }
            cout<<"Modified";
            return ou;
        }
};




int main()
{
    Solution s;
    vector<int>d={1,2,0};
    vector<int>g;
    g=s.addToArrayForm(d,34);
    for(auto h:g)
    {
        cout<<h;
    }
    // vector<int>s={1,2,0,0};
    // int k=34;
    // string d;
    // int out;
    // for(auto f:s)
    // {
    //     d.append(to_string(f));
    // }
    // out=stoi(d)+k;
    // cout<<out;
}