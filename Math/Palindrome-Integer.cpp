int Solution::isPalindrome(int A) {
    if(A<0) return false;
    // int ans=A;
    // int reverse=0;
    // while(A>0)
    // {
    //     int ldigit=A%10;
    //     reverse= reverse*10+ldigit;
    //     A=A/10;
    // }
    // if(ans==reverse) return true;
    // return false;// first approach
    
    
    // Two pointer Technique
    string ans = to_string(A);
    int start=0,end=ans.size()-1;
    while(start<end)
    {
        if(ans[start]!=ans[end]) return false;
        start++;
        end--;
    }
    return true;
}
