#include <bits/stdc++.h>
using namespace std;

#define int long long

int a[100001], n, q;

bool check(int x)
{
    for (int i = 2; i <= n; ++i)
        if (a[i] + x * i < a[i - 1] + x * (i - 1))
            return false;
    return true;
}

signed main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n >> q;
        for (int i = 1; i <= n; ++i)
            cin >> a[i];
        for (int i = 1, x, y; i <= q; ++i)
        {
            cin >> x >> y;
            a[x] = y;
            int L = 0, R = 1000000000;
            while (abs(L - R) >= 4)
            {
                int M = (L + R) / 2;
                if (check(M))
                    R = M + 1;
                else
                    L = M - 1;
            }
            for (int i = L; i <= R; ++i)
                if (check(i))
                {
                    cout << i << endl;
                    break;
                }
        }
    }
}