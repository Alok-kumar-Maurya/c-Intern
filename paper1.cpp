#include<bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.1415926535897932384626 
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
#define debugxy(x,y) cout<<"[ "<<x<<"  "<<y<<" ]"<< endl
#define debugx(x) cout <<"[ "<< x <<" ]"<<endl
#define endl  "\n" 
//#include<ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree <int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update > ordered_set; 
void question1() 
{
    int n ;
    cin >> n ;
    vi v(n) ;
    for(auto &x : v) 
    cin >> x ;
    int ans[2] = { INT_MAX , INT32_MAX};         ////   time complexcity O(n)
    for(int i = 0 ; i < n ; i ++) 
    {
        if(v[i] != ans[0] && v[i] <= ans[1]) 
        {
            int c = min ( ans[0] , ans[1]) ;
            ans[0] = min (c , v[i] ) ;
            ans[1] = max(c , v[i]) ;
        }
    }
    cout<< ans[0] << " "<< ans[1] << endl;
}
int search(multiset<int> s , int idx) 
{

      int x = *(next( s.begin(), idx));
      return x ;
}
void question2() 
{
    int n ;
    cin >> n ;
    multiset<int> s ;
    for(int i = 0 ; i < n ; i ++ ) 
    {  
        int x ;
        cin >> x ;
        s.insert(x);
        if(s.size() % 2 == 0) 
        { 
            int idx = s.size() ;
            int c = search(s , idx / 2) ;
            int d = search(s , (idx - 1) / 2 ) ;
            cout <<  (c + d ) / 2 <<" ";
        }
        else 
        {
              cout << search(s , s.size() / 2) << " ";
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output3.txt","w",stdout);
    // #endif 
    question1() ;
    question2() ;
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