#include<iostream>
#include <map>
using namespace std;
int main()
{
    map<int,string>s;
    s[1]="Hello";
    s[2]="There";
    // for(auto a:s)
    // {
    //     cout<<a.first<<" "<<a.second;
    // }
    auto q=s.find(2);
    if(q==s.end())
    {
        cout<<"Nothing there";
    }
    else
    {
        cout<<q->first<<" "<<q->second;
    }
} 
