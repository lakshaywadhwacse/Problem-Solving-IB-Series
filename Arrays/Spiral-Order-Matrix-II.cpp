vector<vector<int>> Solution::generateMatrix(int A) {
    vector<vector<int>>v(A);
    for(int i=0;i<A;i++)
    {
        for(int j=0;j<A;j++)
        {
            v[i].push_back(0);
        }
    }
   
     int strow=0,endrow=A-1,stcol=0,endcol=A-1;
     int count=1;
     while(strow<=endrow and (stcol <=endcol))
     {
         for(int j=stcol;j<=endcol;j++)
         {
             v[strow][j]=count;
             count++;
         }
         strow++;
         for(int i= strow;i<=endrow;i++ )
         {
             v[i][endcol]=count;
             count++;
         }
         endcol--;
         
         if(endrow> strow)
         {
             for(int j= endcol;j>=stcol;j--)
             {
                 v[endrow][j]=count;
                 count++;
             }
             endrow--;
         }
        
        if(endcol> stcol)
        {
            for(int i= endrow;i>=strow;i--)
            {
                v[i][stcol]=count;
                count++;
            }
            stcol++;
        }
    }
    return v;
}
