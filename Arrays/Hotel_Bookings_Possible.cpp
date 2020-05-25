bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    
    vector<pair<int,int>> ans;
    
    for(int i=0;i<arrive.size();i++)
    {
        ans.push_back(make_pair(arrive[i],1));
        ans.push_back(make_pair(depart[i],0));
        
    }
    
    sort(ans.begin(),ans.end());
    
    int curr_active=0, max_active=0;
    
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i].second==1)
        {
            curr_active++;
            max_active=max(curr_active,max_active);
        }
        else
        {
            curr_active--;
        }
    }
    
    
    if(max_active>K) return false;
    else return true;

    
}
