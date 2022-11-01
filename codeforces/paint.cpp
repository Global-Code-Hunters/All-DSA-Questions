#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<string>v;
        for(int i=0;i<8;i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        int count=0;
        bool flag=false;
        for(auto i:v)
        {
            int count1=0;
            
            for(auto j:i)
            {
                if(j=='R')count1++;
                else if(j=='B')
                {
                    count++;
                    break;
                }
            }
            if(count1!=8)
            {
                flag=true;
            }
        }
        if(flag)
        {
            cout<<"B"<<endl;
        }
        else{
            cout<<"R"<<endl;
        }

    }
}