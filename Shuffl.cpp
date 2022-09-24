#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>s={1,2,3,4,4,3,2,1};
    vector<int>a;
    int d=s.size()/2;
    for(int i=0,j=d;i<d and j<s.size();i++,j++)
    {
        a.push_back(s[i]);
        a.push_back(s[j]);
    }
    for(auto i:a)
        cout<<i<<" ";
}