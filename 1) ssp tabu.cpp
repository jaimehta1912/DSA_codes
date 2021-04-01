class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        int t[N+1][sum+1];
        memset(t,-1,sizeof t);
       for (int i=0;i<N+1;i++)for(int j=0;j<sum+1;j++){
           t[i][0]=0;
           t[0][j]=1; }
            for (int i=1;i<N+1;i++)for(int j=1;j<sum+1;j++){
                if(t[i][j]==-1){
           if (arr[i-1]>j) t[i-1][j]= t[i-1][j];
        else  t[i-1][j] = t[i-1][j-arr[i-1]]||t[i-1][j];
            }}
           return t[N][sum];
}
};

