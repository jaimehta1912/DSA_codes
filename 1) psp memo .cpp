class Solution{

	public:
	int perfectSum(int arr[], int n, int sum)
{	int t[n][sum];
	memset(t,-1,sizeof t);
	{if(t[n][sum] ==-1)
	    {
	        if(sum==0) {return 1;}
	    if (n==0){return 0; }
        if (arr[n-1]<=sum)return t[n][sum] = perfectSum(arr,n-1, sum-arr[n-1])+perfectSum(arr,n-1, sum);
        else if(arr[n-1]>sum) return t[n][sum] = perfectSum(arr,n-1, sum);
	    }
	    else return t[n][sum];
	}
}	  
};
