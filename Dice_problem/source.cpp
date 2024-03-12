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

int dp[100001] ;
int f(int n)
{
    if(n < 0)
    {
        return 0 ;
    }
    if(n == 0)
    {
        return 1 ;
    }
    if(dp[n] != -1)
    {
        return dp[n] ;
    }
    int ans = 0 ;
    for(int i=1;i<=6;i++)
    {
        if(i <= n)
        {
            ans += (f(n-i) % M) ;
            ans %= M ;
        }
    }
    return dp[n] = ans ;
}
void solve()
{
    int n ; cin>>n ;
    memset(dp,-1,sizeof(dp)) ;
    if(n == 0)
    {
        cout<<0<<"\n" ; return ; 
    }
    
    int ans = f(n) % M ;
    cout<<ans<<"\n" ;
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
