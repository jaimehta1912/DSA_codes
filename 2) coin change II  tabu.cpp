class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        if(n==0) return 0;   
        int t[n+1][amount+1]; 
        for(int i=0;i<=amount;i++)
        {
            t[0][i]=INT_MAX-1;
        }
        
        for(int i=1;i<=n;i++)
        {
            t[i][0]=0;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=amount;j++)
            {
                if(j<coins[i-1])
                {
                    t[i][j]=t[i-1][j];
                }
                else
                {
                t[i][j]=min(1+t[i][j-coins[i-1]],t[i-1][j]);
                }
            }
        }
        int ans= t[n][amount];
        
        if(ans==INT_MAX-1) return -1;
        else return ans;
        return {};
    }
};
