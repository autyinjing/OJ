/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if (pRoot1 == NULL || pRoot2 == NULL)
            return false;
        return isSubTree(pRoot1, pRoot2) || HasSubtree(pRoot1->left, pRoot2) || HasSubtree(pRoot1->right, pRoot2);
    }
    
private:
    bool isSubTree(TreeNode *node1, TreeNode *node2)
    {
        //若B是空，则无论A是否为空，B都是A的子结构，空树是任何树的子结构
        if (node2 == NULL)
            return true;
        if (node1 == NULL)
            return false;
        //若非空，则当结点值相同，并且左右子树都满足子结构条件时，B是A的子结构
        if (node1->val == node2->val)
            return isSubTree(node1->left, node2->left) && isSubTree(node1->right, node2->right);
        else //结点值不同，肯定不是子结构
            return false;
    }
};
