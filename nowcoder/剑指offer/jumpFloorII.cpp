class Solution {
public:
    int jumpFloorII(int number) {
        //可以证明得到f(n) = 2*f(n-1)
        int fpre = 1; 	//前一项
        int fn = fpre;
        for (int i = 2; i <= number; ++i) {
            fn = 2 * fpre;
            fpre = fn;
        }
        
        return fn;
    }
};
