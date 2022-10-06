class TimeMap {
public:
    unordered_map<string, map<int, string>> um;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        um[key][timestamp] = value; // setting key and timestamp in hashmap of maps
    }
    
    string get(string key, int timestamp) {
        auto it = um[key].lower_bound(timestamp); // look for first value >= timestamp (this is binary search so its O(log n) )
        if(it == um[key].begin() && it->first != timestamp) return ""; // timestamp is too low so nothing is found
        if(it == um[key].end() || it->first != timestamp) it--; // timestamp is too high so go 1 element back
        return it->second; // return key-value pair
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */