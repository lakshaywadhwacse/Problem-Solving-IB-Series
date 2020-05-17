// void sieve(long long int n,map<int,int>&m)
// {
//     for(long long int i=3;i<=n;i+=2)
//     {
//         m[i]=1;
//     }
//     for(long long int i=3;i<=n;i+=2)
//     {
//         for(int j=i*i;j<=n;j+=i)
//         {
//             m[j]=0;
//         }
//     }
//     m[2]=1;
//     m[0]=m[1]=0;
// }
// vector<int> Solution::primesum(int A) {
    
//     // generate all primes less than A
//     // then we have to put all those prime number in hash table
//     // if i is prime then check n-i is prime or not by checking in hash table 
//     // and then output it
//     map<int,int>m;
//     vector<long long int>v;
//     v.reserve(2);
//     sieve(A,m);
//     // for(int i=0;i<A;i++)
//     // {
//     //     cout<<p[i]<<" ";
//     // }
//     for(int i=2;i<A;i++)
//     {
//         if(m[i]==1 and m[A-i]==1)
//         {
//             v.push_back(i);
//             v.push_back(A-i);
//             break;
//         }
        
//     }
//     return v;
    
// }
bool isprime(int n)
{
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0) return false;
    }
    return true;
}
vector<int> Solution::primesum(int A) {
    vector<int>ans;
    ans.reserve(2);
    
    for(int i=2;i<A;i++)
    {
        if(isprime(i) && isprime(A-i))
        {
            ans.push_back(i);
            ans.push_back(A-i);
            break;
        }
    }
    return ans;
}

