int Solution::repeatedNumber(const vector<int> &A) {
    // map<int,int>m;
    // for(int i=0;i<A.size();i++)
    // {
    //     m[A[i]]+=1;
        
    // }
    // int flag=0;
    // for(int i=0;i<A.size();i++)
    // {
    //     if(m[A[i]]>1)
    //     {
    //         return A[i];
    //         flag=1;
    //     }
        
    // }
    // if(flag==0) return -1;
    if(A.size()==1) return -1;
    
    vector<int>B(A.size()+1,0);
    for(int i=0;i<A.size();i++)
    {
        B[i]=A[i];
    }
    
    for(int i=0;i<A.size();i++)
    {
        if(B[abs(B[i])]>=0)
        {
            B[abs(B[i])]=-B[abs(B[i])];
        }
        else
        {
            return abs(B[i]);
        }
    }
    
    
    
    
    
}
