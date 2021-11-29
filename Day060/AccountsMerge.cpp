class Solution {
public:
    void dfs(string& email) {
        seen.insert(email);
        ans.back().push_back(email);
        for(auto& adjEmail : G[email]) 
            if(!seen.count(adjEmail)) 
                dfs(adjEmail);        
    }
    vector<vector<string>> accountsMerge(vector<vector<string>>& A) {        
        for(auto& acc : A)                            
            for(int i = 2; i < size(acc); i++)               
                G[acc[i]].push_back(acc[i-1]),              
                G[acc[i-1]].push_back(acc[i]);
        
        for(auto& acc : A) 
            if(!seen.count(acc[1])) {                        
                ans.push_back({acc[0]});                     
                dfs(acc[1]);                                 
                sort(begin(ans.back())+1, end(ans.back()));  
            }            
        
        return ans;
    }
private:
    unordered_map<string, vector<string>> G;   
    unordered_set<string> seen;               
    vector<vector<string>> ans;  
};