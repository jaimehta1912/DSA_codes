class Solution{
    public:
        int lcs(int x, int y, string s1, string s2){
        int t[x][y];
        memset (t,-1,sizeof(t));
        
        if(x==0||y==0) return t[x][y]= 0;
      //  if(t[x][y]!=-1)        return t[x][y];
     //   else{
        if (s1[x-1]==s2[y-1]) return t[x][y]= 1+lcs(x-1,y-1,s1,s2);
        
        else return t[x][y]= max(lcs(x-1,y,s1,s2),lcs(x,y-1,s1,s2));
   //     }
        
    }
};
