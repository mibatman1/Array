#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    vector<int>d={1};
    map<int,int>s;
    vector<int>g;
    int k=1;
    for(auto i=0;i<d.size();i++)
    {
        s[d[i]]++;
    }
    for(auto r:s)
    {
        if(r.second>=2)
        {
            g.push_back(r.first);
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<g[i];
    }
}