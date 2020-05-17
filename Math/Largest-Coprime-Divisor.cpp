set<int> getDivisors(int n)
{
    set<int>s;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            s.insert(i);
            s.insert(n/i);
        }
    }
    return s;
}
int Solution::cpFact(int A, int B) {
    // for(int i=A;i>=1;i--)
    // {
    //     if(A%i==0 and __gcd(B,i)==1) return i;
    // }// time limit exceed
    set<int>s = getDivisors(A);
    int max=1;
    for(auto a:s)
    {
        if(__gcd(a,B)==1)
        {
            max=a;
        }
    }
    return max;
}
