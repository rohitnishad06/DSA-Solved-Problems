
    bool isSafe( vector<vector<int> > &m , int n, int x, int y,  vector<vector<int>> &visited ){
        if((x>=0 && x<n)  && (y>=0 && y<n) && visited[x][y] == 0 && m[x][y] == 1){
            return true;
        }
        return false;
    }

    void solve(vector<vector<int> > &m, int x, int y, string path, vector<vector<int>> &visited, vector<string> &ans, int n ){
        // base case
        if(x == n-1 && y == n-1){
            ans.push_back(path);
            return;
        }

        visited[x][y] = 1;

        // 4th path D, L, R, U

        // down
        int newx = x+1;
        int newy = y;
        if(isSafe(m, n, newx, newy, visited)){
            path.push_back('D');
            solve(m,newx, newy,path,visited,ans,n);
            path.pop_back();
        }

        // left
        newx = x;
        newy = y-1;
        if(isSafe(m, n, newx, newy, visited)){
            path.push_back('L');
            solve(m,newx, newy,path,visited,ans,n);
            path.pop_back();
        }

        // right
        newx = x;
        newy = y+1;
        if(isSafe(m, n, newx, newy, visited)){
            path.push_back('R');
            solve(m,newx, newy,path,visited,ans,n);
            path.pop_back();
        }

        // up
        newx = x-1;
        newy = y;
        if(isSafe(m, n, newx, newy, visited)){
            path.push_back('U');
            solve(m,newx, newy,path,visited,ans,n);
            path.pop_back();
        }

        visited[x][y] = 0;
        
    }
    
    vector<string> ratMaza(vector<vector<int> > &m) {
        int n = m.size();
        vector<string>ans;

        if(m[0][0] == 0){
            return ans;
        }

        int srcx = 0;
        int srcy = 0;

        string path = "";

        vector<vector<int>> visited(n, vector<int>(n, 0));

        solve(m,srcx, srcy, path, visited, ans, n);
        sort(ans.begin(), ans.end());
        return ans;

    }