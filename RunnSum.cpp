#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a={1,2,3,4,5};
    for(int i=1;i<a.size();i++)
        a[i]+=a[i-1];
    for(auto i:a)
        cout<<i<<" ";
}