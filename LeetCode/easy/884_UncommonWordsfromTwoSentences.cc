class Solution {                                                  
public:                                                           
    vector<string> uncommonFromSentences(string A, string B) {    
        istringstream ssa(A), ssb(B);                             
        string word;                                              
        map<string, int> help[2];                                 
        vector<string> ret;                                       
        while (ssa >> word) ++help[0][word];                      
        while (ssb >> word) ++help[1][word];                      
        for (auto &it : help[0]) {                                
            if (it.second == 1 && help[1].find(it.first) == help[1].end())
                ret.push_back(it.first);                          
        }                                                         
        for (auto &it : help[1]) {                                
            if (it.second == 1 && help[0].find(it.first) == help[0].end())
                ret.push_back(it.first);                          
        }                                                         
        return ret;                                               
    }                                                             
};                                                                
