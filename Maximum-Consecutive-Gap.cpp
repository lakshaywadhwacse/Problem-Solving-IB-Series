int Solution::maximumGap(const vector<int> &A){
    if(A.size()<2) return 0;
    
    vector<int>B(A.size(),0);
    for(int i=0;i<A.size();i++)
    {
        B[i]=A[i];
    }
    
    sort(B.begin(),B.end());
    int max_diff=INT_MIN;
    for(int i=0;i<A.size()-1;i++)
    {
        max_diff=max(max_diff,B[i+1]-B[i]);
    }
    return max_diff;
}
