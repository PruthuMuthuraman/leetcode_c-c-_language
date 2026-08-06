class Solution {
public:

    vector<int> generateRow(int n) {
        vector<int> vt;
        long long ans = 1;

        vt.push_back(1);

        for (int i = 1; i < n; i++) {
            ans = ans * (n - i);
            ans = ans / i;
            vt.push_back(ans);
        }

        return vt;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vo;

        for (int i = 1; i <= numRows; i++) {
            vo.push_back(generateRow(i));
        }

        return vo;
    }
};
