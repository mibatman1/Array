#include <functional>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>s={3,2,1,5,6,4};
    int k=2;
    sort(s.begin(),s.end(),greater<int>());
    cout<<s[k-1];
}