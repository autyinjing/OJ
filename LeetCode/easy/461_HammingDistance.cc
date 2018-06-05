class Solution {
public:
	int hammingDistance(int x, int y) {
		int ret = 0, num = x ^ y;
		while (num) {
			if (num & 1)
				++ret;
			num >>= 1;
		}
		return ret;
	}
};
