void Solution::rotate(vector<vector<int> > &A) {
    // int len=A.size();
    // int tmp;
    // for(int i=0;i<len/2;i++)
    // {
    //     for(int j=i;j<len-i-1;j++)
    //     {
    //         tmp=A[i][j];
    //         A[i][j]=A[len-j-1][i];
    //         A[len-j-1][i]=A[len-i-1][len-j-1];
    //         A[len-i-1][len-j-1]=A[j][len-i-1];
    //         A[j][len-i-1]=tmp;
    //     }
    // }
    
    
    // It can also be done by first transpose them matrix and then reverse the matrix 
    // and its code can be seen as :
    for(int i=0;i<A.size();i++)
	{
		for(int j=0;j<i;j++)
		{
			int t=A[i][j];
			A[i][j]=A[j][i];
			 A[j][i]=t;
		}
	}
	int low=0,high=A[0].size()-1;
	while(low<high)
	{
		for(int i=0;i<A.size();i++)
		{
			int t=A[i][low];
			A[i][low]=A[i][high];
		    A[i][high]=t;
		}
		low++;
		high--;
	}
    
    
}
