vector<vector<int> > Solution::solve(int n) {
 vector<vector<int>>result;
 vector<int>t;
 if(n==0) return t;
 t.push_back(1);
 result.push_back(t);
 if(n==1) return result;
 
 vector<int>tt;
 tt.push_back(1);
 tt.push_back(1);
 result.push_back(tt);
 if(n==2) return result;

 for(int i=2;i<n;i++)
 {
     vector<int>ttt;
     ttt.push_back(1);
     for(int j=1;j<i;j++)
     {
         ttt.push_back(result[i-1][j-1]+result[i-1][j]);
     }
     ttt.push_back(1);
     result.push_back(ttt);
 }
 return result;
}
