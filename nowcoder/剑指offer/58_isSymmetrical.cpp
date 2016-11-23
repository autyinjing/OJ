/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    bool Like(TreeNode* p, TreeNode* q) 
    {
        if (p == NULL && q == NULL) {
            return true;
        }
        if (p != NULL && q != NULL) {
            return (p->val == q->val) && Like(p->left, q->right) && Like(p->right, q->left);
        }
        return false;
    }
    bool isSymmetrical(TreeNode* pRoot)
    {
        if (pRoot != NULL) {
            return Like(pRoot->left, pRoot->right);
        } else {
            return true;
        }
    }
};
