vector<int> Solution::getRow(int A) {
 vector<vector<int>>result;
 vector<int>t;
 t.push_back(1);
 result.push_back(t);
 if(A==0) return t;
 
 vector<int>tt;
 tt.push_back(1);
 tt.push_back(1);
 result.push_back(tt);
 if(A==1){
    return tt;
 }

 for(int i=2;i<=A;i++)
 {
     vector<int>ttt;
     ttt.push_back(1);
     for(int j=1;j<i;j++)
     {
         ttt.push_back(result[i-1][j-1]+result[i-1][j]);
     }
     ttt.push_back(1);
     result.push_back(ttt);
     if(i==A) return ttt;
 }

}
