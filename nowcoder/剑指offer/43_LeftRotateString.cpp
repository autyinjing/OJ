class Solution {
public:
    string LeftRotateString(string str, int n) {
        //三次翻转实现循环左移
        if (str.size() != 0) {
	        n = n % str.size();
    	    reverse(str.begin(), str.end());
        	reverse(str.begin(), str.begin() + str.size() - n);
	        reverse(str.begin() + str.size() - n, str.end());
        }
        return str;
    }
};
