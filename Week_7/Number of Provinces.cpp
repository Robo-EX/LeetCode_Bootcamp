// https://leetcode.com/problems/number-of-provinces/

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n, 0);
        vector<int> adj[n];
        
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                if(isConnected[i][j] == 1)
                    adj[i].push_back(j);
        int ans = 0;
        queue<int> q;
        
        for(int i =0; i < n;i++){
            if(!vis[i]){
                ans++;
                q.push(i);
                vis[i] = 1;
                while(!q.empty()){
                    int node = q.front();
                    q.pop();
                    for(auto it:adj[node]){
                        if(!vis[it]){
                            vis[it] = 1;
                            q.push(it);
                        }
                    }
                }
            }
        }
        return ans;
    }
};
