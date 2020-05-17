int Solution::reverse(int A) {
   
    int ans=A;
    int rev=0;
    while(A!=0)
    {
        int rem= A%10;
        int temp=  rem+ rev*10;
        
        // can handle cyclicity
        if(temp/10 != rev)
        {
            return 0;
        }
        rev=temp;
        A=A/10;
    }
    return rev;
}
