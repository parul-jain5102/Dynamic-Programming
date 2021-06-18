//LCS 
#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define MP make_pair
#define PB push_back
#define MOD 1000000007
#define fi first
#define se second
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<PII> VPII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
int n,m;
VI A,B;
int memo[100][100];
int LCS(int i,int j)
{
       cout<<"LCS-->"<<i<<" "<<j<<endl;
       if(memo[i][j]!=-1)
              return memo[i][j];
       if(i>n || j>m)
       {
              memo[i][j]=0;
              return 0;
       }
       if(A[i]==B[j])
       {
              int opt= 1+LCS(i+1,j+1);
              memo[i][j]=opt;
              return opt;
       }
       else
       {
              int opt2=max(LCS(i+1,j,k),LCS(i,j+1));
              return opt2;
       }
       
}
int32_t main()
{
       cin>>n>>m;
       A.resize(n+1);
       B.resize(m+1);
       for(int i=1;i<=n;i++)
              cin>>A[i];
       for(int i=1;i<=m;i++)
              cin>>B[i];
       memset(memo,-1,sizeof(memo));
       cout<<LCS(1,1);
       return 0;
}

