//using recursion of lcs into lis
class Solution{
    public:
    // return length of longest strictly increasing subsequence
    
    int longestSubsequence(int n, int a[])
    { 
        int a2[n];
     for(int i1=0;i1<n;i1++)
        {
             a2[i1]=a[i1];
        }
        int t[n+1][n+1];
     
sort(a2,a2+n);

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
               t[i][j] = 0;
// for (int i=1;i<n+1;)
            else if (a[i - 1] == a2[j - 1])
                t[i][j] = t[i - 1][j - 1] + 1;
 
            else
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
        }
    }
 
    // Return the ans
    return t[n][n];
    }
};

