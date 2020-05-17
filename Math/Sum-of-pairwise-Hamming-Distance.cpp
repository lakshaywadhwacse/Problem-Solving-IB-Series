int Solution::hammingDistance(const vector<int> &A) {
    // first calculate the xor value of one  pair and then count no of set bit in it and then do
    // it for all pair and the sum all the set bit which is ans 
    // It will follow O(n*2) solution
    // int sum=0;
    // for(int i=0;i<A.size();i++)
    // {
    //     for(int j=i;j<A.size();j++)
    //     {
    //         sum+=__builtin_popcountll(A[i]^A[j]);
    //     }
    // }
    // return 2*sum; // time limit exceed error
    
    
    // Second approach bro ------------------------------->
    const int mod=1000000007;
    vector<int>binary_array(32,0);
    for(int i=0;i<A.size();i++)
    {
        int num=A[i];
        int index=0;
        while(num>0)
        {
            binary_array[index]+=num&1;
            index++;
            num=num>>1;
            
        }
    }
    int ans=0;
    for(int i=0;i<binary_array.size();i++)
    {
        ans+= binary_array[i]*(A.size()-binary_array[i]);
        
    }
    return 2*ans%mod;
    
}
