class Solution{
public:

    bool isSafe(int node, int col, vector<int> &color, vector<int> adj[]) {
        for(auto neighbour : adj[node]) {
            if(color[neighbour] == col)
                return false;
        }
        return true;
    }

    bool solve(int node, int m, int n, vector<int> &color, vector<int> adj[]) {
        
        // Base case
        if(node == n)
            return true;
        
        // Try all colors
        for(int col = 1; col <= m; col++) {
            
            if(isSafe(node, col, color, adj)) {
                
                color[node] = col;
                
                if(solve(node + 1, m, n, color, adj))
                    return true;
                
                color[node] = 0; // backtrack
            }
        }
        
        return false;
    }

    bool graphColoring(vector<vector<int> >& edges, int m, int n) {
        
        // Step 1: Create adjacency list
        vector<int> adj[n];
        for(auto &e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        // Step 2: Color array
        vector<int> color(n, 0);
        
        // Step 3: Backtracking
        return solve(0, m, n, color, adj);
    }
};