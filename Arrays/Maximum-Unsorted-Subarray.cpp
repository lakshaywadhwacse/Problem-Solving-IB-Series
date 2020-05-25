vector<int> Solution::subUnsort(vector<int> &A) {
    
    vector<int>result;
    int s=0,e=A.size()-1,i,max,min;
    for(s=0;s<A.size()-1;s++)
    {
        if(A[s] > A[s+1]) break;
    }
    
    if(s==A.size()-1) 
    {
        result.push_back(-1);
        return result;
    }
    
    // step 1(b) of above algo
    
    for(e= A.size()-1;e>0;e--)
    {
        if(A[e]< A[e-1]) break;
    }
    if(e==0)
    {
        result.push_back(-1);
        return result;
    }
    // Now we got starting and ending point now what we should do is
    // Now we will calcuate the minimum and maximum value between s and e
    // then we run a loop from i=0 to i=s-1 such that if we encounter that value is 
    // greater than minimum value then update the s to that value index
    
    // If at any particular point in range e+1 to n-1 if we encounter that
    // value is less than maximum value then update end point to that value index
    int min_value=INT_MAX;
    int max_value=INT_MIN;
    for(int i=s;i<=e;i++)
    {
       if(A[i]<min_value) min_value=A[i];
       if(A[i]> max_value) max_value=A[i];
    }
    
    for(int i=0;i<=s-1;i++)
    {
        if(A[i]>min_value) s= i;
    }
    
    for(int i=A.size()-1;i>=e+1;i--)
    {
        if(A[i]<max_value)e=i;
    }
    
    
    result.push_back(s);
    result.push_back(e);
    return result;
    
}
