class Solution {                                                            
public:                                                                     
    string toGoatLatin(string S) {                                          
        int idx = 1;                                                        
        stringstream ss(S), ret;                                            
        string help;                                                        
        set<char> cset = {'a','e','i','o','u'};                             
        while (ss >> help) {                                                
            if (idx > 1) ret << " ";                                        
            if (cset.count(tolower(help[0]))) {                                      
                ret << (help + "ma" + string(idx, 'a'));                    
            } else {                                                        
                ret << (help.substr(1) + help[0] + "ma" + string(idx, 'a'));
            }
            ++idx;
        }
        return ret.str();
    }
};
