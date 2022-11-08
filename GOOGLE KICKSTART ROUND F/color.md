
#  color
   
   ## Problem
    A fabric is represented by three properties:

    Color (C), a string consisting of lowercase letters of the English alphabet, representing the color of the fabric.
    Durability (D), an integer representing the durability of the fabric.
    Unique identifier (U), an integer representing the ID of the fabric.
    Ada and Charles work at the Kick Start fabric factory. Each day they receive N fabrics, and one of them has to sort it. They sort it using the following criteria:

    Ada sorts in lexicographically increasing order by color (C).
    Charles sorts in ascending order by durability (D).
    They break ties by sorting in ascending order by the unique identifier (U).
    Given N fabrics, count the number of fabrics which end up in the same position regardless of whether Ada or Charles sort them.

    Input
    The first line of the input gives the number of test cases, T. T test cases follow.
    Each test case begins with one line consisting of an integer N denoting the number of fabrics. Then N lines follow, each line with a string Ci, an integer Di, and an integer Ui: the color, the durability and the unique identifier of the i-th fabric respectively.

    Output
    For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of fabrics which end up in the same position regardless of whether a worker sorts them by color or by durability.

    Limits
    Time limit: 20 seconds.
    Memory limit: 1 GB.
    1≤T≤100.
    1≤ length of string Ci ≤10.
    String Ci consists of only lowercase letters of the English alphabet.
    No two fabrics have same Ui.

    Test Set 1
    1≤N≤2.
    1≤Di≤2.
    1≤Ui≤2.
    Test Set 2
    1≤N≤103.
    1≤Di≤102.
    1≤Ui≤103.
    Sample
    Note: there are additional samples that are not run on submissions down below.

## Input


    3
    2
    blue 2 1
    yellow 1 2
    2
    blue 2 1
    brown 2 2
    1
    red 1 1
## Output
    Case #1: 0
    Case #2: 2
    Case #3: 1


## solution

```cpp

#include<bits/stdc++.h>
using namespace std;


int32_t main()
{
    int t;
    cin>>t;
    int testcase=1;
    while(t--)
    {
        long n,d,u;
        vector<pair<string,int>>c1;
        vector<pair<int,int>>d1,u1;
        cin>>n;
        for(long i=0;i<n;i++)
        {
            string s;
            int d,u;
            cin>>s>>d>>u;
            c1.push_back( {s,u} );
            d1.push_back( {d,u} );
        
        }
        
        sort(c1.begin(),c1.end());
        sort(d1.begin(),d1.end());
        
        
        long count=0;
        
        for(long i=0;i<n;i++)
        {
             if ( c1 [ i ] .second == d1 [ i ] .second )count++;
        }
        
         cout<<"Case #"<<testcase<<": "<<count<<endl;
         testcase++;
    }
}

```

