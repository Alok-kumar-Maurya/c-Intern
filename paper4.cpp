#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
#define debugxy(x, y) cout << "[ " << x << "  " << y << " ]" << endl
#define debugx(x) cout << "[ " << x << " ]" << endl
#define endl "\n"
//#include<ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree <int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update > ordered_set;
void question1()
{
    int n;
    cin >> n;
    vi v(n);
    for (auto &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    int l = 0, r = n - 1;
    int ans = INT32_MAX;
    while (l < r)
    {

        int x = v[l] + v[r];
        if (abs(x) < abs(ans))
            ans = x;

        else if (abs(x) == abs(ans))
            ans = max(ans, x);

        if (x < 0)
            l++;

        else
            r--;
    }
    cout << ans << endl;
}
void question2()
{
    int n;
    cin >> n;
    vi v(n);
    int cnt = 0;           
    for (auto &x : v)
    {
        cin >> x;
    }
    vi ans;
    for (int i = 0; i < n; i++)
    {
        int old = v[i] % n;
        v[old] = v[old] + n;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= 2)
            ans.push_back(i);
    }
    for (auto x : ans)
        cout << x << " ";
}
void question3()
{
    int n;
    cin >> n;
    vi v(n);
    for (auto &x : v)
        cin >> x;
    int x, y; //// complexity O(n) ;
    cin >> x >> y;
    int idx = -1, ans = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == y)
        {
            if (idx != -1)
                ans = min(ans, i - idx);
        }
        if (v[i] == x)
            idx = i;
    }
    idx = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == y)
        {
            if (idx != -1)
                ans = min(ans, idx - i);
        }
        if (v[i] == x)
            idx = i;
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
#endif
    //question1();
    //question2();
    //question3();
    return 0;
    // THINGS TO KEEP IN MIND
    //   * int overflow, time and memory limits
    //   * Special case (n = 1?)
    //   * Do something instead of nothing and stay organized
    //   * Don't get stuck in one focus
    //   * int l=s.length()-x (s.length()<x) garbage value
    // TIME AND MEMORY LIMITS
    //   * 1 second is approximately 10^8 operations (c++)
    //   * 10^6 Elements of 32 Bit (4 bytes) is equal to 4 MB
    //   * 62x10^6 Elements of 32 Bit (4 bytes) is equal to 250 MB
    //   * 10^6 Elements of 64 Bits (8 bytes) is equal to 8 MB
    //   * 31x10^6 Elements of 64 Bit (8 bytes) is equal to 250 MB
}