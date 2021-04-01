class Soluticlass Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        int t[N][sum];
        memset(t,-1,sizeof t);
        if( t[N][sum]==-1){
            if (N<=0)
            {return 0;}
            if(sum==0)
            { return 1;}
        if (arr[N-1]<=sum) return t[N][sum] = isSubsetSum(N-1,arr, sum-arr[N-1])||isSubsetSum(N-1,arr, sum);
        else if (arr[N-1]>sum)return t[N][sum]= isSubsetSum(N-1,arr, sum);
        }        else t[N][sum];
}
};
