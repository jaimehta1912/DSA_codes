class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
         int t[n+1][m+1];
        memset (t,-1,sizeof(t));
        int res =0;
        for (int i=0;i<n+1;i++) t[i][0]=0;
          for (int j=0;j<m+1;j++) t[0][j]=0;
       
       for (int i=1;i<n+1;i++)for (int j=1;j<m+1;j++){
  // if(t[i][j!=-1)        return t[n][m];
    // else{
        if (S1[i-1]==S2[j-1]) {t[i][j]= 1+t[i-1][j-1]; res = max(res, t[i][j]);}
        
        else t[i][j]= 0;
}
       
    //}
             return res;
    }
};
