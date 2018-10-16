class Solution {                  
public:  
    bool isHappy(int n) {         
        int slow = n, fast = n;
        do {
            slow = squareSum(slow);
            fast = squareSum(fast);
            fast = squareSum(fast);
        } while (slow != fast);
        return slow == 1;
    }    

    int squareSum(int n) {
        int pow2[] = {0,1,4,9,16, 25,36,49,64,81};                                     
        int sum = 0;
        while (n) {
            sum += pow2[n%10];
            n /= 10;
        }
        return sum;
    }    
};       
//Floyd判圈算法：使用两个指针，分别以不同的步长移动，如果序列有圈，那么最后一定会相遇
