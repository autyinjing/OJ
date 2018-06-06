class Solution {
public:
	bool hasAlternatingBits(int n) {
		//n + (n >> 1)低位变成全1，加1变全0。如果不是，则证明不满足条件
		return !((n + (n >> 1) + 1) & (n + (n >> 1)));
	}
};
