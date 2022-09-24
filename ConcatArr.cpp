#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>s={1,2,1};
    for(auto i=0;i<s.size();i++)
        s.push_back(s[i]);
        
    for(auto i:s)
        cout<<i<<" ";
}
