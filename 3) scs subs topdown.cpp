int shortestCommonSupersequence(char* X, char* Y, int m, int n) {
    //code here
int t[m+1][n+1];
memset(t, 0, sizeof(t));
for(int i=1; i<=m; i++){
for(int j=1; j<=n; j++){
if(X[i-1] == Y[j-1]){
t[i][j] = 1 + t[i-1][j-1];
}else{
t[i][j] = max(t[i-1][j], t[i][j-1]);
}
}
}
return m+n-t[m][n];

}
