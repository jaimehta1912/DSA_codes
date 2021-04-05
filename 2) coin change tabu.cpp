class Solution
{
  public:
    long long int count( int S[], int m, int n )
    {/*
        int sum=n;
//m=number of elements

   -   int t[m+1][sum+1];
      for(int j=0;j<sum+1;j++)t[0][j]=0;
      for (int i=0;i<m+1;i++)t[i][0]=1; 
      for (int i=1;i<m+1;i++)for(int j=1;j<sum+1;j++){
      if(S[i-1]<=j) t[i][j]=t[i-1][j]+t[i][j-S[i-1]];
      else t[i][j]=t[i-1][j];
      }return t[m][sum];
    */
    int t[m+1][n+1];
     for (int i=0;i<m+1;i++)t[i][0]=1; 
      for(int j=0;j<n+1;j++)t[0][j]=0;
     
      for (long long int i=1;i<m+1;i++)for(long long int j=1;j<n+1;j++){
      if(S[i-1]<=j) t[i][j]=t[i-1][j]+t[i][j-S[i-1]];
      else t[i][j]=t[i-1][j];
      }
      return t[m][n];
/*
long long int dp[m+1][n+1];
memset(dp,0,sizeof(dp));
for(int i=0;i<=m;i++)
{
for(int j=0;j<=n;j++)
{
if(i==0) dp[i][j]=0;
if(j==0) dp[i][j]=1;
}
}
for(long long int i=1;i<=m;i++){
for( long long int j=1;j<=n;j++){
if(S[i-1]<=j){
dp[i][j]=dp[i][j-S[i-1]] + dp[i-1][j];
}
else{
dp[i][j]=dp[i-1][j];
}
}
}
return dp[m][n];

*/
    }
};
