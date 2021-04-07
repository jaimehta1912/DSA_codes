class Solution{
		

	public:
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    int abc;
	    int x=str1.length();
	    int y=str2.length();
	    // int lcs(int x, int y, string s1, string s2){
        int t[x+1][y+1];
        memset (t,-1,sizeof(t));
        for (int i=0;i<x+1;i++) t[i][0]=0;
          for (int j=0;j<y+1;j++) t[0][j]=0;
       
       for (int i=1;i<x+1;i++)for (int j=1;j<y+1;j++){
  // if(t[i][j!=-1)        return t[x][y];
    // else{
        if (str1[i-1]==str2[j-1]) t[i][j]= 1+t[i-1][j-1];
        
        else t[i][j]= max(t[i][j-1],t[i-1][j]);
}
       
    //}
             abc= t[x][y];
	int ins = y - abc;
int del = x -abc;
return ins + del;
	         
	         
	     } 
};
