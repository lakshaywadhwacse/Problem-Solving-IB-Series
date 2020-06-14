https://www.interviewbit.com/problems/stairs/

int ways(int A,int dp[])
{
    if(A==0) return 1;
    if(A==1) return 1;
    if(dp[A]!=0)return dp[A];
    int nways=0;
    nways= ways(A-1,dp)+ ways(A-2,dp);
    return dp[A]=nways;
    
}
int Solution::climbStairs(int A) {
   int dp[100]={0};
   ways(A,dp);
   return dp[A];
}
