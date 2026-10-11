class Solution {
public:
bool bfs(int source, int V, vector<vector<int>>& adj, vector<bool>& visited, int destination){
    queue<int> q; 

    q.push(source); 
        visited[source] = true;

    while(!q.empty()){
        if(q.front() == destination){
            return true;
        }
        int node = q.front(); 
        q.pop();
        for(int neighbour : adj[node]){
            if(!visited[neighbour]){
            visited[neighbour] = true;
            q.push(neighbour);
            }
            
        }
    }
    return false; 

}

bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    vector<bool> visited(n, false); 
      
        vector<vector<int>> adj(n);
        for(auto edge : edges){
                int u = edge[0];
                int v = edge[1]; 

                adj[u].push_back(edge[1]);
                adj[v].push_back(edge[0]);
            
        }
        return bfs(source, n, adj, visited, destination);
}
};