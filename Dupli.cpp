//Duplicate the zero
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>s={1,0,2,3,0,4,5,0};
    vector<int>d;
    int h=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[h]!=0)
        {
            d.push_back(s[h]);
            h++;
        }
        else
        {
            d.push_back(0);
            d.push_back(0);
            h++;
            i++;
        }
    }
    for(auto a:d)
    {
        cout<<a<<" ";
    }
}



void duplicateZeros(vector<int>& arr)
{
    int c=0;
    vector<int>vect;
    for(auto i=0;i<arr.size();i++)
    {
        if(arr[c]!=0)
        {
            vect.push_back(arr[c]);
            c++;
        }
        else
        {
            vect.push_back(0);
            vect.push_back(0);
            c++;
            i++;
        }
    }
    for(int i=0;i<vect.size();i++)
    {
        arr[i]=vect[i];
    }
}

