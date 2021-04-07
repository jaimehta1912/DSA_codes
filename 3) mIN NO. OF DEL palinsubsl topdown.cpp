//SHOWING ERROR 

#include <iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int kkk(string S){
    int ans;
	  //  string S;
	    int x=S.length();
	    int y=S.length();
string s1=S;
string t1=S;
reverse(t1.begin(),t1.end());
 int t[x+1][y+1];
        memset (t,-1,sizeof(t));
        for (int i=0;i<x+1;i++) t[i][0]=0;
          for (int j=0;j<y+1;j++) t[0][j]=0;
       
       for (int i=1;i<x+1;i++)for (int j=1;j<y+1;j++){
  // if(t[i][j!=-1)        return t[x][y];
    // else{
        if (s1[i-1]==t1[j-1]) t[i][j]= 1+t[i-1][j-1];
        
        else t[i][j]= max(t[i][j-1],t[i-1][j]);
}
       
    //}
             ans= t[x][y];

	int kk=x-ans;
//cout<<x-ans<<endl;
return kk;
}
int main() {
    
	//code
	int t12;
	cin>>t12;
	
	while (t12--)
	
	{   string S;
	cin>>S;
	    cout<<kkk(S)<<endl;
	}
//	return 0;
	}
