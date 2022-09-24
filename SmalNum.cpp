#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a={8,1,2,2,3};
    vector<int>s;
    int d;
    int c=0;
    for(int i=0;i<a.size();i++)
    {
        d=a[i];
        for(int j=0;j<a.size();j++)
        {
            if(d>a[j])
                c++;
        }
        s.push_back(c);
        c=0;
    }
    for(auto i:s)
        cout<<i<<" ";
}