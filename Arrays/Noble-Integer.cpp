int Solution::solve(vector<int> &A) {
    
    // if(A.size()==1 and A[0]==0) return 1;
    // if(A.size()==1 and A[0]!=0) return -1;
    // int num_greater;
    // // for(int i=0;i<A.size();i++)
    // // {
    // //     num_greater=0;
    // //     for(int j=0;j<A.size();j++)
    // //     {
    // //         if(A[j]>A[i])num_greater++;
    // //     }
    // //     if(A[i]==num_greater)return 1;
    // // }
    // // return -1;
    
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i++)
    {
        if(A[i]==A[i+1])continue;
        
        if(A[i]==A.size()-i-1) return 1;
    }
    if(A[A.size()-1]==0) return 1;
    return -1;
}
