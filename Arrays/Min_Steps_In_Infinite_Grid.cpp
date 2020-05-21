int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
    int t=0;
    int n=X.size();
    for(int i=1;i<n;i++)
    {
        int x=abs(X[i]-X[i-1]);
        int y=abs(Y[i]-Y[i-1]);
        int diagnol=min(x,y);
        t+=abs(x-y)+diagnol;
    }
    return t;
    
}
