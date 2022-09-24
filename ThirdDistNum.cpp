#include <algorithm>
#include <functional>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>s={3,2,2,1,4};
    sort(s.begin(),s.end(),greater<int>());
    s.erase(unique(s.begin(),s.end()));
    if(s.size()<3)
        cout<<s[0];
    else
        cout<<s[2];
}