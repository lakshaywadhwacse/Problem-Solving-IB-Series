int Solution::trailingZeroes(int A) {
    int sum=0,p=5;
    while(A/p>0)
    {
        sum+=A/p;
        p=p*5;
        
    }
    return sum;
}
