void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    // vector<vector<int>>v;
    // for(int i=0;i<A.size();i++)
    // {
    //     vector<int>t;
    //     for(int j=0;j<A[0].size();j++ )
    //     {
    //         t.push_back(A[i][j]);
    //     }
    //     v.push_back(t);
    // }
    //  for(int i=0;i<A.size();i++)
    // {
    //     for(int j=0;j<A[0].size();j++)
    //     {
    //         if(A[i][j]==0)
    //         {
    //             for(int k=0;k<A[0].size();k++)
    //             {
    //                 v[i][k]=0;
    //             }
                
    //             for(int l=0;l<A.size();l++)
    //             {
    //                 v[l][j]=0;
    //             }
    //         }
    //     }
    // }
    
    // for(int i=0;i<A.size();i++)
    // {
    //     for(int j=0;j<A[0].size();j++)
    //     {
    //         A[i][j]=v[i][j];
    //     }
    // }// partial correct answer 
    
    // Now the idea is to make an different array of row and column which store 
    // where the element is zero such that that we can directly do it zero
    vector<int>m(A.size(),-1);
    vector<int>n(A[0].size(),-1);
    
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            if(A[i][j]==0)
            {
                m[i]=0;
                n[j]=0;
            }
        }
    }
    for(int i=0;i<m.size();i++)
    {
        if(m[i]==0)
        {
            for(int j=0;j<A[0].size();j++)
            {
                A[i][j]=0;
            }
        }
    
    }
    
    
    for(int j=0;j<n.size();j++)
    {
        if(n[j]==0)
        {
            for(int i=0;i<A.size();i++)
            {
                A[i][j]=0;
            }
        }
    }
    
}
