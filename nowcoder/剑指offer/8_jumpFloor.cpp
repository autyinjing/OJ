class Solution {
public:
    int jumpFloor(int number) {
        //实质上就是Fibonacci数列，因为跳n级台阶等价于站在1级台阶上跳n-1级，或者站在2级上跳n-2阶
        //但是台阶没有0级，所以不考虑0的情况,整个数列从1,2开始
        if (number == 1)
            return 1;
        int f1, f2, fn;
        f1 = 1;
        fn = f2 = 2;
        for (int i = 3; i <= number; ++i) {
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
        }
        
        return fn;
    }
};
