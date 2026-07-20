class LRUCache {
public:
    LRUCache(int capacity) : capacity_(capacity) {
        
    }
    
    int get(int key) {
        auto it = cacheMap_.find(key);

        if (it == cacheMap_.end()) {
            return -1;
        }

        cacheList_.splice(
            cacheList_.begin(),
            cacheList_,
            it->second);
        
        return it->second->second;
    }
    
    void put(int key, int value) {
        auto it = cacheMap_.find(key);

        if (it != cacheMap_.end()){
            it->second->second = value;
            cacheList_.splice(
                cacheList_.begin(),
                cacheList_,
                it->second
            );

            return;
        }

        if (capacity_ == 0){
            pair<int,int> leastRecentlyUsed = cacheList_.back();
            cacheMap_.erase(leastRecentlyUsed.first);
            cacheList_.pop_back();
        }else{
            capacity_--;
        }

        cacheList_.push_front({key,value});
        cacheMap_[key] = cacheList_.begin();
    }

private:
    int capacity_;
    std::list<pair<int,int>> cacheList_;
    std::unordered_map<int,std::list<pair<int,int>>::iterator> cacheMap_;
};
