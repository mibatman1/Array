#include<iostream>
#include<algorithm>
using namespace std;

class Solution
{
    public:
        bool isAnagram(string s, string t)
        {
            int a=s.size();
            int b=t.size();
            if(a!=b)
                return false;
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            for(auto i=0;i<a;i++)
            {
                if(s[i]!=t[i])
                    return false;
            }
            return true;
        }
};













// int main()
// {
//     string s="anagram";
//     string t="nagaram";
//     map<char,int>d,g;
//     vector<int>h,j;
//     for(auto i=0;i<s.size();i++)
//     {
//         d[s[i]]++;
//         g[t[i]]++;
//     }
//     for(auto i:d)
//     {
//         h.push_back(i.second);
//     }
//     for(auto i:g)
//     {
//         j.push_back(i.second);
//     }
//     for(int i=0;i<h.size();i++)
//     {
//         if(h[i]!=j[i])
//             break;
//     }
//     return
// }


