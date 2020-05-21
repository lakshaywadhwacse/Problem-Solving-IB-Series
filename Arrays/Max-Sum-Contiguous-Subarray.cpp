int Solution::maxSubArray(const vector<int> &A) {
    
    int curr=A[0];
    int maximum=A[0];
    int n=A.size();
    for(int i=1;i<n;i++)
    {
        curr=max(curr+A[i],A[i]);
        maximum=max(curr,maximum);
        
    }
    return maximum;
}
