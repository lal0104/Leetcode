class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n= matrix.size();
        int m=matrix[0].size();
        vector<int> ans;
        int startrow=0;
        int endcolumn= m-1;
        int endrow= n-1;
        int startcolumn=0;
        int count =0;
        while(count<(n*m))
        {
            for(int i=startcolumn;i<=endcolumn && count<(n*m);i++)
            {
                ans.push_back(matrix[startrow][i]);
                count++;
            }
            startrow++;
             for(int i=startrow;i<=endrow && count<(n*m);i++)
            {
                ans.push_back(matrix[i][endcolumn]);
                count++;
            }
            endcolumn--;
             for(int i=endcolumn;i>=startcolumn && count<(n*m);i--)
            {
                ans.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;
             for(int i=endrow;i>=startrow && count<(n*m);i--)
            {
                ans.push_back(matrix[i][startcolumn]);
                count++;
            }
            startcolumn++;
        }
        return ans;
    }
};