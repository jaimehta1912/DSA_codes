int res=0;
        int lis[n];
        for (int i=0;i<n;i++) lis[i]=1;
        
        for (int i=0;i<n;i++)for (int j=0;j<i;j++)
        {
            if (a[i]>a[j]&& lis[j]>=lis[i]) lis[i]=lis[j]+1;
        }
    for( int i1 =0;i1<n;i1++) res=max(res,lis[i1]);
        return res;
