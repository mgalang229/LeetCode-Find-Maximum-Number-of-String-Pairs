class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size(), cnt = 0;
        bool vis[n];
        memset(vis, false, sizeof(vis));
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (vis[j])
                    continue;
                if (words[i][0] == words[j][1] && words[i][1] == words[j][0]) {
                    cnt++;
                    vis[j] = true;
                    break;
                }
            }
        }
        return cnt;
    }
};
