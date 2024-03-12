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
int  M = 1e9 + 7 ;
int dp[1001][1001] ;
int f(vector<vector<char>>&grid,int i,int j,int n)
{
    if(i == n-1 && j == n-1)
    {
        return 1 ;
    }

    if(dp[i][j] != - 1)
    {
        return dp[i][j] ;
    }
    
    int ans = 0 ;
    if(i + 1 < n && grid[i + 1][j] != '*')
    {
        ans += (f(grid,i+1,j,n) % M) ;
        ans %= M ;
    }
    if(j + 1 < n && grid[i][j + 1] != '*')
    {
        ans += (f(grid,i,j + 1,n) % M) ;
        ans %= M ;
    }

    return dp[i][j] = ans ;
}
void solve()
{
    int n ; cin>>n ;
    vector<vector<char>>grid ;
    for(int i=0;i<n;i++)
    {
        vector<char>temp ;
        for(int j=0;j<n;j++)
        {
            char c ; cin>>c ;
            temp.push_back(c) ;
        }
        grid.push_back(temp) ;
    }
    memset(dp,-1,sizeof(dp)) ;
    int ans = f(grid,0,0,n) ;

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