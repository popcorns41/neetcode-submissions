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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<pair<TreeNode*,TreeNode*>> bfs;

        bfs.push({p,q});

        while (!bfs.empty()){
            auto [nodeP,nodeQ] = bfs.front();
            bfs.pop();

            if (!nodeP && !nodeQ) continue;

            if (!nodeP || !nodeQ || nodeP->val != nodeQ->val) return false;

            bfs.push({nodeP->left,nodeQ->left});
            bfs.push({nodeP->right,nodeQ->right});
        }

        return true;
        
        
    }
};
