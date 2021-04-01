class Solution {
public:
    bool canPartition(vector<int>& nums) {
       int  sum =0;
        for (int i1 =0;i1<nums.size();i1++)sum=sum+nums[i1];
        if(sum%2!=0)return false;
        else 
        {
          int sum1=sum/2;
            int n;
            int t[n+1][sum1+1];
            memset(t,-1,sizeof t);
            for(int i=0;i<n+1;i++)  for(int j=0;j<sum1+1;j++)
            {   t[0][j]=0;
                t[i][0]=1;
            } for(int i=1;i<n+1;i++)  for(int j=1;j<sum1+1;j++)
            { if(t[i][j]==-1)
             {
              if(t[i][j]<=sum1){t[i][j]=t[i-1][j-nums[i-1]]||t[i-1][j];
                              }   
             }
            else {
                t[i][j]=t[i-1][j];
            }
            }            
        }
        return t[n][sum1];
    }
};
