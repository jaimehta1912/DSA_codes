class Solution{
    public:
//ERROR IN THE CODE    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
         int t[n+1][m+1];
        memset (t,-1,sizeof(t));
        int res =0;
      //  for (int i=0;i<n+1;i++) t[i][0]=0;
        //  for (int j=0;j<m+1;j++) t[0][j]=0;
    //   for (int i=1;i<n+1;i++)for (int j=1;j<m+1;j++){
  // if(t[i][j!=-1)        return t[n][m];
    // else{
        if(n==0||m==0) return t[n][m]= 0;
        if (S1[n-1]==S2[m-1])
{ return t[n][m]= 1+longestCommonSubstr (S1, S2,  n-1, m-1); 
//res = max(res, t[n][m]);
    
}
 else    if (S1[n-1]==S2[m-1])
{ //return t[n][m]= 1+longestCommonSubstr (S1, S2,  n-1, m-1); 
res = max(res, t[n][m]);
    
}      
        else return t[n][m]= 0;
       
        return res;
}
    //}
             
    
};
