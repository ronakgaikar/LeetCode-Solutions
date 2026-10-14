class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int node = 0;
        vector<bool> visited(rooms.size(), false);
        dfs(node, rooms, visited);
        for (bool v : visited) {
        if (!v) {
            return false;
        }
    }
    return true;
    }
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;  
    cout << node << " "; 

    for (int neighbor : adj[node]) { 
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
        }
    }

}
};