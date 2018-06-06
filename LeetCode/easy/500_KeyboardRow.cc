class Solution {
public:
	vector<string> findWords(vector<string>& words) {
		vector<string> ret;
		int mask[26] = {2,3,3,2,1, 2,2,2,1,2, 2,2,3,3,1, 1,1,1,2,1, 1,3,1,3,1, 3};
		for (int i = 0; i < words.size(); ++i) {
			bool is_ok = true;
			string &tmp = words[i];
			for (int j = 0; j < tmp.size()-1; ++j)
				if (mask[tolower(tmp[j])-'a'] != mask[tolower(tmp[j+1])-'a']) {
					is_ok = false;
					break;
				}
			if (is_ok)
				ret.push_back(tmp);
		}
		return ret;
	}
};
