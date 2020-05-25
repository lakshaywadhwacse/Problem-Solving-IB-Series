bool comp(string x, string y)
{
    string xy= x.append(y);
    
    string yx= y.append(x);
    
    return xy.compare(yx) > 0 ? 1 : 0;
    
}
string Solution::largestNumber(const vector<int> &A) {
    vector<string>B;
    
    for(int i=0;i<A.size();i++)
    {
      B.push_back(to_string(A[i]));
    }
    int count=0;
    for(int i=0;i<B.size();i++)
    {
        if(B[i]=='0') count++;
    }
    if(count==B.size())return "0";
    sort(B.begin(),B.end(),comp);
    
    string ans;
    for(int i=0;i<B.size();i++)
    {
        ans+=B[i];
    }
    return ans;
}
