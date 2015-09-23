class Solution {
public:
    int rectCover(int number) {
        //本质上还是Fibonacci数列，从1,2开始;
        //个人觉得测试用例有问题，还是要符合逻辑才行，number应该是一个正整数
        if (number <= 1) 	
            return 1;
        int f1 = 1, f2 = 2;
        int fn = f2;
        for (int i = 3; i <= number; ++i) {
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
        }
        
        return fn;
    }
};
