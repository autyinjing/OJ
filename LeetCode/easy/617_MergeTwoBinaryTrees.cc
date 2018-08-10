/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        /*TreeNode *node = nullptr, *lr[4] = {nullptr};
          if (t1) {
            node = t1;
            lr[0] = t1->left;
            lr[1] = t1->right;
          }
          if (t2) {
            if (node)
                node->val += t2->val;
            else
            node = t2;
            lr[2] = t2->left;
            lr[3] = t2->right;
          }
          if (node) {
            node->left  = mergeTrees(lr[0], lr[2]);
            node->right = mergeTrees(lr[1], lr[3]);
          }
          return node;*/

        if (!t1 && !t2)
            return nullptr;
        TreeNode *node = new TreeNode(0);
        node->val   = (t1?t1->val:0) + (t2?t2->val:0);
        node->left  = mergeTrees(t1?t1->left:nullptr, t2?t2->left:nullptr);
        node->right = mergeTrees(t1?t1->right:nullptr, t2?t2->right:nullptr);
        return node;
    }
};
