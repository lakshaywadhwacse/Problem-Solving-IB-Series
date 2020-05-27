int Solution::firstMissingPositive(vector<int> &A) {
    
    
    // for(int i=1;i<=A.size();i++)
    // {
    //     bool present = binary_search(A.begin(),A.end(),i);
    //     if(!present)
    //     {
    //         return i;
    //     }
    // }
    
    
    // first sort the array and then go for it
    // sort(A.begin(),A.end());
    // int min=1;
    // for(int i=0;i<A.size();i++)
    // {
    //     if(A[i]==min)
    //     {
    //         min++;
    //     }
    // }
    // return min;// o(nlogn ) It is nlogn approach
    
    int n=A.size();
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>0 and A[i]<=n)
        {
            int pos=A[i]-1;
            if(A[pos]!=A[i])
            {
                swap(A[pos],A[i]);
                i--;
            }
        }
        
    }
    
    for(int i=0;i<A.size();i++)
    {
        if(A[i]!=i+1) return i+1;
    }
    return n+1;
    
    
}
