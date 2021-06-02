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
    int n , m ;
    cin >> n >> m ;
    vi a1(n), a2(m);         ////// complexcity O( max(n , m))

    for(auto &x : a1) 
    cin >> x ;
    
    auto it = unique(a1.begin() , a1.end());
    a1.resize( distance(a1.begin() , it)) ;
    n = a1.size() ;
    for(auto &x : a2) 
    cin >> x ;

    auto it2 = unique(a2.begin() , a2.end());
    a2.resize( distance(a2.begin() , it2)) ;
    m = a2.size() ;
    int i = 0 , j = 0 ;
    vi unio_n , intersection;
    while( i < n && j < m ) 
    {
         if(a1[i] == a2[j]) 
         {
            unio_n.push_back(a1[i]) ;
            intersection.push_back(a1[i]) ;
            i ++ ;
            j ++ ;
         }
         else if(a1[i] < a2[j])  
         {
             unio_n.push_back(a1[i]) ;
             i ++ ;
         }
         else if(a1[i] > a2[j]) 
         {
             unio_n.push_back(a2[j]) ;
             j ++ ;
         }
    }
    while(i < n) 
    {
        unio_n.push_back(a1[i]) ;
        i ++ ;
    }
    while(j < m) 
    {
        unio_n.push_back(a2[j]) ;
        j ++ ;
    }
    cout <<"Union  " ;
    for(auto x : unio_n ) 
    cout << x <<" ";
    cout << endl << "Intersection " ;
    for(auto x : intersection) 
    cout <<x << " " ;
    cout << endl;
}

// /// //////////////////////////
void question2()
{
      
       int n  , k  ;                         //  complexity time - O(n)  
       cin >> n >> k ;
       k = k % n ; 
       vi v(n) ;
       for(int i = 0 ; i < n ; i ++ ) 
       {
           cin >> v[i] ;
       }
       reverse(v.begin(), v.begin() + k ) ;
       reverse(v.begin() + k , v.end()) ;
       reverse(v.begin() , v.end()) ;
        
       for(int i = 0 ; i < n ; i ++ ) 
       cout << v[i] <<" " ;

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