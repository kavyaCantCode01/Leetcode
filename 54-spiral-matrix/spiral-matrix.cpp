class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int top = 0 , lft = 0, bottom = m -1 , rht = n-1;
        vector<int> ans; 
        while(top <= bottom && lft <= rht){
            //top
            for(int i=lft;i<=rht;i++)
                ans.push_back(mat[top][i]);
            // right
            for(int i= top+1;i<=bottom;i++)
                ans.push_back(mat[i][rht]);
            // bottom
             for(int i=rht -1;i>=lft;i--){
                if(top == bottom)
                    break;
                ans.push_back(mat[bottom][i]);
                }
            // left
            for(int i= bottom - 1;i>=top +1;i--){
                if(lft == rht)
                    break;
                ans.push_back(mat[i][lft]);

            }
            top ++ , lft++ , bottom -- , rht--;
        }
        return ans;
    }
};