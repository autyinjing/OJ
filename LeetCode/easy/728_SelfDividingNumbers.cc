class Solution {
public:
	vector<int> selfDividingNumbers(int left, int right) {
		vector<int> ret;
		for (int num = left; num <= right; ++num) {
			int help = num;
			while (help) {
				int t = help % 10;
				if (t <= 0 || (num % t) != 0)
					break;
				help /= 10;
			}
			if (!help)
				ret.push_back(num);
		}
		return ret;
	}
};
