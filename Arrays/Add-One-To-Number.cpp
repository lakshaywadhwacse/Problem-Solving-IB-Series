vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> result;
    int n=A.size();
    vector<int> temp;
    int carry=1,curr;
    for(int i=n-1;i>=0;i--)
    {
        curr=carry+A[i];
        carry=curr/10;
        temp.push_back(curr%10);
    }
    if(carry>0)
    {
        temp.push_back(carry);
    }
    int len=temp.size();
    while(true)
    {
        if(temp[len-1]==0)
            len--;
        else break;
    }
    for(int i=len-1;i>=0;i--)
    {
        result.push_back(temp[i]);
    }
    return result;
}
