class Solution {
public:
    int Fibonacci(int n) {
        if (n == 0)
            return 0;
        if ((n == 1) || (n == 2))
            return 1;
        int f1, f2, fn;
        f1 = f2 = 1;
        for (int i = 3; i <= n; ++i) {
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
        }
        
        return fn;
    }
};
