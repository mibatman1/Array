//Plus one the digit
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>s={1,2,3,5};
        int carry = 1;
        for(int i = s.size()-1; i>=0; i--)
        {
            if(s[i] == 9 && carry == 1)
            {
                s[i] = 0;
                carry = 1;
                if(i == 0)
                {
                    s.push_back(1);
                    reverse(s.begin(),s.end());
                }
            } 
            else
            {
                s[i] = s[i] + carry;
                carry = 0;
            }
            
        }
         for(auto r:s)
        {
            cout<<r;
        }
    }
