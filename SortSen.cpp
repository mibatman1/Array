#include <cctype>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
//This1 is3 called2
//This is called

class Solution
{
    public:
        string sortSentence(string s)
        {
            vector<string>d(20);
            string w,res;
            for(auto i=0;i<s.size();i++)
            {
                if(isdigit(s[i]))
                {
                    w+=" ";
                    d[s[i]-'0']=w;
                    w="";
                    i++;
                }
                else
                {
                    w+=s[i];

                }
            }
            for(auto i:d)
            {
                res+=i;
            }
            res.pop_back();
            return res;
        }
};

int main()
{
    Solution s;
    string d="sentence4 a2 called6 is7";
    cout<<s.sortSentence(d);
}