class Solution {
public:
    void dfs (vector<vector<int>>& image, int sr, int sc, int m, int n, int color, int temp) {
        if (sr < 0 || sr >= m || sc < 0 || sc >= n) return;
        if (image[sr][sc] == color) return;

        if (image[sr][sc] == temp) {
            image[sr][sc] = color;
            dfs(image, sr - 1, sc, m, n, color, temp);
            dfs(image, sr + 1, sc, m, n, color, temp);
            dfs(image, sr, sc - 1, m, n, color, temp);
            dfs(image, sr, sc + 1, m, n, color, temp);
        }
        return;
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
 
        int temp = image[sr][sc];
        int m = image.size();
        int n = image[0].size();

        dfs (image, sr, sc, m, n, color, temp);
        return image;
    }
};
