class MyHashMap {             
public:                       
    static const int kTableSize = 9973;
    MyHashMap() {             
    }                         

    void put(int key, int value) {
        int idx = key % kTableSize;
        auto &bucket = table_[idx];
        for (auto &p : bucket)
            if (p.first == key) {
                p.second = value;
                return ;      
            }                 
        bucket.push_back(make_pair(key, value));
    }                         

    int get(int key) {        
        int idx = key % kTableSize;
        auto &bucket = table_[idx];
        for (auto &p : bucket)
            if (p.first == key)
                return p.second;
        return -1;            
    }                         

    void remove(int key) {    
        int idx = key % kTableSize;
        auto &bucket = table_[idx];
        for (auto it = bucket.cbegin(); it != bucket.end(); ++it)
            if (it->first == key) {
                bucket.erase(it);
                break;                                           
            }   
    }                         
                              
private:                      
    list<pair<int, int>> table_[kTableSize];
};
