#include <cstring>
#include<iostream>
#include <string>
#include<vector>
using namespace std;
int main()
{
    char st[100],st1[100];
    string s;
    int k=0,l=0;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='#')
        {
            st[k++]=s[i];
        }
        else
        {
            st1[l++]=s[i];
        }
    }
    strcat(st,st1);
    for(auto g:st)
    {
        cout<<g;
    }












    // string s="My#Name#Is#Shiv";
    // string d,w;
    // int c=0;
    // vector<string>g;
    // for(auto i=0;i<s.size();i++)
    // {
    //     if(s[i]=='#')
    //     {
    //         c++;
    //         g.push_back(d);
    //         d="";
    //     }
    //     else
    //     {
    //         d+=s[i];
    //     }
    // }
    // for(auto i=0;i<c;i++)
    // {
    //     w+="#";
    // }
    // for(auto h:g)
    // {
    //     w+=h;
    // }
    // cout<<w;

}