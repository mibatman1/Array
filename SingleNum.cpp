#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    vector<int>a={1,1,2,4,2};
    map<int,int>s;
    for(auto i=0;i<a.size();i++)
    {
        s[a[i]]++;
    }
    for(auto r:s)
    {
        if(r.second==1)
        {
            return r.first;
        }
    }

}