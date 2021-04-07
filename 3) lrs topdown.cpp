class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		   string S=str;
		     int x=S.length();int y=S.length();
string s1=S;
string t1=S;
//reverse(t1.begin(),t1.end());
 int t[x+1][y+1];
        memset (t,-1,sizeof(t));
        for (int i=0;i<x+1;i++) t[i][0]=0;
          for (int j=0;j<y+1;j++) t[0][j]=0;
       
       for (int i=1;i<x+1;i++)for (int j=1;j<y+1;j++){
  // if(t[i][j!=-1)        return t[x][y];
    // else{
        if ((s1[i-1]==t1[j-1])&&(i!=j)) t[i][j]= 1+t[i-1][j-1];
        
        else t[i][j]= max(t[i][j-1],t[i-1][j]);
}
       
    //}
             return t[x][y];
}
	//	}

};

