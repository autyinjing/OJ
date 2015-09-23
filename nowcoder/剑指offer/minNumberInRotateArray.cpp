class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        //最偷懒的做法
        //return *min_element(rotateArray.begin(), rotateArray.end());
        
        if (rotateArray.size() == 0)
            return 0;
        //自己实现查找最小元，二分在这里并不能满足所有条件
        int min = rotateArray[0];
        for (int i = 1; i < rotateArray.size(); ++i) {
            if (rotateArray[i] < min)
                min = rotateArray[i];
        }
        
        return min;
    }
};
