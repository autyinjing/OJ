class Solution {
public:
     int  NumberOf1(int n) {
         int count = 0;
         //方法1：用n和n-1做与运算
         /*while (n != 0) {
             ++count;
             n = n & (n - 1);
         }*/
         
         //方法2：用一个辅助变量做与运算
         int mask = 1;
         for (int i = 0; i < sizeof(int) * 8; ++i) {
             if (n & mask)
                 ++count;
             mask <<= 1;
         }
         
         return count;
     }
};
