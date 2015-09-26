class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        if (sequence.size() == 0)
            return false;
        return judge(sequence, 0, sequence.size() - 1);
    }
    
private:
    //判断一个序列是否满足后序遍历二叉搜索树的条件
    bool judge(const vector<int> &vec, int left, int right) {
        if (left >= right)
            return true;
        int mid = right - 1;
        //右子树上的任意结点值都比根结点要大
        while ((mid >= left) && (vec[mid] > vec[right]))
            --mid;
        //左子树上的任意结点值都比根节点要小
        for (int i = mid; i >= left; --i) {
            if (vec[i] >= vec[right])
                return false;
        }
        //分别判断左右子树
        return judge(vec, left, mid) && judge(vec, mid+1, right-1);
    }
};
