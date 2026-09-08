/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        TreeNode* temp = root;
        if(!temp)return 0;
        stack <pair<TreeNode*,int>> st;
        st.push({temp,1});
        int maxi = 0;
        while(!st.empty()){
            TreeNode* top = st.top().first;
            int lvl = st.top().second;
            maxi = max(maxi, lvl);
            st.pop();
            if(top -> left)st.push({top -> left,lvl+1});
            if(top -> right)st.push({top -> right,lvl+1});
        }
        return maxi;
        
    }
};