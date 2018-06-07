class Solution {
public:
	vector<string> subdomainVisits(vector<string>& cpdomains) {
		//哈希表比map快
		unordered_map<string, int> h_map;
		for (const auto &str : cpdomains) {
			string::size_type pos = str.find(' ');
			int cnt = stoi(str.substr(0, pos));
			h_map[str.substr(pos+1)] += cnt;
			while ((pos = str.find('.', pos+1)) != string::npos)
				h_map[str.substr(pos+1)] += cnt;
		}

		//预分配空间 + emplace_back()代替push_back()
		vector<string> ret;
		ret.reserve(h_map.size());
		for (const auto &it : h_map)
			ret.emplace_back(to_string(it.second) + " " + it.first);
		return ret;
	}
};
