class Solution {
public:
	int arrayPairSum(vector<int>& nums) {
		//快速排序，Nlog(N)
		/*sort(nums.begin(), nums.end());
		  int sum = 0, size = nums.size();
		  for (int i = 0; i < size; i += 2)
		  sum += nums[i];
		  return sum;*/

		//桶排序，2N，even记录到目前为止，已经处理的数字数量是不是偶数
		int cnt[20001] = {0}, sum = 0, even = 1;
		for (auto i : nums) ++cnt[i+10000];
		for (int i = 0; i < 20001; ++i) {
			int tmp = cnt[i];
			if (tmp) {
				sum += (((tmp + even) >> 1)) * (i - 10000);
				even = (tmp & 1) ? (1 - even) : even;
			}
		}
		return sum;
	}
};
