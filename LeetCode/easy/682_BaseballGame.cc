class Solution {
public:
	int calPoints(vector<string>& ops) {
		vector<int> help;
		for (auto const &it : ops) {
			if (it[0] == '+')
				help.push_back(help[help.size()-1]+help[help.size()-2]);
			else if (it[0] == 'D')
				help.push_back(help.back() * 2);
			else if (it[0] == 'C')
				help.pop_back();
			else
				help.push_back(stoi(it));
		}
		//单独求和快很多？
		int sum = 0;
		for (auto it : help)
			sum += it;
		return sum;
	}
};
