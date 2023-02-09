### QUESTION

    Given two strings s1,s2  , convert s1 to s2;
    operations:
    1. change any character from a to b  or b to a
    2. any two characters can be swapped with cost |i-j|

## Code in CPP
```.cpp

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;

    int cost=0;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]!=s2[i])
        {

            if(i<s1.length()-1 and s2[i+1]!=s1[i+1])
            {
                cost++;
                swap(s1[i],s1[i+1]);
                // swap(s2[i],s2[i+1]);
            }
            else 
            {
                cost++;
                s1[i]=s2[i];
            }
        }
        else continue;
        
    }

    cout<<cost<<endl;
}

```
