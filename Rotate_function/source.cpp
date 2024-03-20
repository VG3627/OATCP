#include <bits/stdc++.h>
typedef long long ll;
#define vi     vector <int>
#define vll    vector <long long>
#define vs     vector <string>
#define vc     vector <char>
#define PII    pair<int,int>
#define mll    map<long long,long long>
#define UMII   unordered_map<int,int>
#define sz(a)  a.size()
#define all(a) a.begin(),a.end()
#define ff     first 
#define ss     second 
#define endl  "\n"
using namespace std;

void solve()
{
    int n ; cin>>n ;
    vector<int>v(n) ; for(auto &temp:v) cin >> temp;
    int sum = 0 ;
    for(int i=0;i<n;i++)
    {
        sum += v[i] ;
    }
    int maxm = INT_MIN ;

    //initial (without rotation)
    int ini = 0 ;
    for(int i=0;i<n;i++)
    {
       ini += (i * v[i]) ;
    } 
    
    maxm = max(maxm,ini) ;
    // cout<<ini<<" " ;
    for(int i=1;i<n;i++) // array rotated n - 1 times
    {
        
        
        ini -= ((n - 1)*v[n - i]) ;
        ini += (sum - v[n - i]) ;
        maxm = max(maxm,ini) ;
        // cout<<ini<<" " ;
    }

    cout<<maxm<<"\n" ;


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    #ifndef CPH 
        freopen("input.txt","r",stdin) ;
        freopen("output.txt","w",stdout) ;
    #endif
    int t ;
    cin>>t ;
    while(t--)
    {
        solve() ;
    }   
    return 0;
}

