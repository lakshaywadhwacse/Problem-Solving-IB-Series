https://www.interviewbit.com/problems/grid-unique-paths/

// int Solution::uniquePaths(int A, int B) {
//     int dp[A][B];
//     int j=0;
//     for(int i=0;i<A;i++)
//     {
//         dp[i][j]=1;
//     }
//     int i=0;
//     for(int j=0;j<B;j++)
//     {
//         dp[i][j]=1;
//     }
//     for(int i=1;i<A;i++)
//     {
//         for(int j=1;j<B;j++)
//         {
//             dp[i][j]= dp[i][j-1]+dp[i-1][j];
            
//         }
//     }
    
//     return dp[A-1][B-1];
// } // top down dp approach which gives the result



// int Solution::uniquePaths(int A, int B) {
//     if(A==1 || B==1) return 1;
    
//     return uniquePaths(A,B-1)+ uniquePaths(A-1,B);
    
// }




// Approach can also be done as for example if we have 3*3 matrix then no of ways are
// rrdd combination which leads to 4!/2!*2!

// so the anser is if we have m*n matrix then the output is given as
// ((m-1) +(n-1))!/ (m-1)! * (n-1)!
int Solution::uniquePaths(int A, int B) {
    int dp[1006];
    dp[0]=1,dp[1]=1;
    for(int i=2;i<1006;i++)
    {
        dp[i]=dp[i-1]*i;
    }
    return (dp[A-1 + B-1]) / (dp[A-1] * dp[B-1]);
    
}// not giving 
