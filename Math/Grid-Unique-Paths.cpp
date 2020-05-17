// Factorial Solution
// Not Accepted

int fact(int n) {
    return (n==1) || (n==0) ? 1 : n* fact(n-1);
}


// Recursive
// Accepted



int Solution::uniquePaths(int A, int B) {
    
  return (A==1 || B==1) ? 1 : uniquePaths(A, B-1) + uniquePaths(A-1, B);
    
}+