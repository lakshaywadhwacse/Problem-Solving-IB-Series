const int mod=1000003;
int fact(int n)
{
    if(n<=1) return 1;
    return (n* fact(n-1))%mod;
}
int Solution::findRank(string A) {
//   string s = A;
//   int rank=1;
//   sort(A.begin(),A.end());
//   while(true)
//   {
//       if(s==A) return rank;
//       if(!next_permutation(A.begin(),A.end())) break;// n! factorial approach which is time limit exceed 
//       rank++;
     
//   }


 // next idea is basically to skipped all the string which are coming before it
 // we can calculate factorial in advance such that no need to calculate it again and again
 long long int fact[A.size()];
 fact[0]=1;
 for(int i=1;i<A.size();i++)
 {
     fact[i]=(fact[i-1] * i)%mod;
 }
 int count,skipped_count=0;
 for(int i=0;i<A.size();i++)
 {
     count=0;
     for(int j=i+1;j<A.size();j++)
     {
         if(A[j]<A[i]) count++;
         
     }
     skipped_count=(skipped_count+count* fact[A.size()-i-1])%mod;
 }
 return skipped_count+1;

}
