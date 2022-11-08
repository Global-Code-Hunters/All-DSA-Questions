#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char m;
        cin >> n >> m;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        string s = "";
        cin >> s;
        string t = "";
        for (auto i : s)
            t.push_back(i);
        for (auto i : t)
            s.push_back(i);

        int mx = INT_MIN;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == m)
            {
                for (int j = i + 1; j < s.length(); j++)
                {
                    if (s[j] == 'g')
                    {
                        mx = max(mx, j - i);
                    }
                }
            }
        }
        cout << mx << endl;
    }
}