vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int>>result((2*A.size())-1);
    for(int j=0;j<A.size();j++)
    {
         int row=0;
         int col =j;
        vector<int>t;
        while((row<A.size()) and (col>=0))
        {
            t.push_back(A[row][col]);
            row++;
            col--;
        }
        result.push_back(t);
    }
    for(int i=1;i<A.size();i++)
    {
        int row=i;
        int col=A[0].size()-1;
        vector<int>c;
        while((row<A.size()) and (col>=0))
        {
            c.push_back(A[row][col]);
            row++;
            col--;
        }
        result.push_back(c);
    }
    return result;
}
