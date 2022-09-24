#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>d={2,2};
    int n = d.size(), i=0;
    vector<int> ans;
    
    while(i<n)
    {
        int correct=d[i]-1;
        if(d[i]!=d[correct])
        {
            swap(d[i],d[correct]);
        }
        else
        {
            i++;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(d[i] != i+1)
        {
            ans.push_back(d[i]);
            ans.push_back(i+1);
        }
    }
    // for(int i=1;i<d.size();i++)
    // {
    //     if(d[i]==d[i-1])
    //     {
    //         f.push_back(i+1);
    //         f.push_back(i);
    //     }
    // }
    for(auto i:ans)
    {
        cout<<i;
    }
}