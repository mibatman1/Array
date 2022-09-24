//Remove the duplicate
#include <cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int c=0;
    vector<int>s={1,1,2};
    for(auto i=0;i<s.size();i++)
    {
        if(s[i]!=1)
        {
            s[c++]=s[i];
        }
    }
    cout<<c;
}



// int removeElement(vector<int>& nums, int val)
// {
    
// }