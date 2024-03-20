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

int dp[1001][1001] ;
int f(vector<int>&a,vector<int>&b,int i,int j,int n,int m)
{
    if(i >= n || j >= m)
    {
        return 0 ;
    }
    if(dp[i][j] != -1)
    {
      return dp[i][j] ;
    }
    if(abs(b[j] - a[i]) <= 1)
    {
      return dp[i][j] = 1 + f(a,b,i+1,j+1,n,m) ;
    }
    else
    {
      return dp[i][j] = max(f(a,b,i+1,j,n,m),f(a,b,i,j+1,n,m)) ;
    }
    

}
void solve()
{
    int n,m ; cin>>n ;
    vector<int>a(n) ; for(auto &temp:a) cin >> temp;
    cin>>m ;
    vector<int>b(m) ; for(auto &temp:b) cin >> temp;
    sort(a.begin(),a.end()) ;
    sort(b.begin(),b.end()) ;
    memset(dp,-1,sizeof(dp)) ;
    cout<<f(a,b,0,0,n,m)<<"\n" ;



}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
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

