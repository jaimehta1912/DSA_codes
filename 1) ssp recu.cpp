
class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        if (N==0){return false; }if(sum==0) return true;
        if (arr[N-1]<sum)
        return isSubsetSum(N-1,arr, sum-arr[N-1])||isSubsetSum(N-1,arr, sum);
        else if(arr[N-1]>sum) return isSubsetSum(N-1,arr, sum);
        
    }
};
