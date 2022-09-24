#include<iostream>
#include<stack>
using namespace std;

class Solution
{
    public:
        bool isValid(string s)
        {
            stack<int>d;
            d.push(s[0]);
            for(int i=1;i<s.size();i++)
            {
                if(s[i]==')' and !d.empty() and d.top()=='(')
                    d.pop();
                else if(s[i]=='}' and !d.empty() and d.top()=='{')
                    d.pop();
                else if(s[i]==']' and !d.empty() and d.top()=='[')
                    d.pop();
                else
                    d.push(s[i]);

            }
            return d.empty();
        }
};

int main()
{
    string s="()[][]";
    Solution d;
    cout<<d.isValid(s);
}