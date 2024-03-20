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
int M = 1e9 + 7 ;
void solve()
{
    int n ; cin>>n ;
    if(n == 0)
    {
        cout<<0<<"\n" ; return ;
    }
    vector<int>v(n) ; for(auto &temp:v) cin >> temp;

    int maxm = INT_MIN ;
    int c = 1 ;

    for(int i=0;i<n;i++)
    {
        if(c == 0)
        {
            c = 1 ;
        }
        c *= (v[i] % M ) ;
        c %= M ;
        maxm = max(maxm,c) ;
    }
    c = 1 ;
    for(int i=n-1;i>=0;i--)
    {
        if(c == 0)
        {
            c = 1 ;
        }
        c *= (v[i] % M ) ;
        c %= M ;
        maxm = max(maxm,c) ;
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