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
    if (n <= 0)
        return;                          /// complexccity O(n)
    vi v(n);
    stack<int> s;
    for (auto &x : v)
        cin >> x;

    int mx = INT32_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] > mx)
            s.push(v[i]);
        mx = max(v[i], mx);
    }       
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

 // /// //////////////////////////
void question2()
{
    int n;
    cin >> n;

    int k = -1 ;
    for (int i = 0; i < 2 * n; i++)
    {   
        if(i == n) 
        k = n ;
        i >= n ? k -- : k ++;
        for (int j = 0; j < 2 * n; j++)
        {
            if (j <= k || j >= 2 * n - 1 - k)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

 /// question 
    question1() ;
    question2();
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