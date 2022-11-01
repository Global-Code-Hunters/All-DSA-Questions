#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        string s;
        cin >> s;

        unordered_map<int, char> mp;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(v[i]) == mp.end())
            {
                mp[v[i]] = s[i];
            }
            else
            {
                if (mp[v[i]] != s[i])
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}