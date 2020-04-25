// class LRUCache {
// public:
//     int cap;
//     list<pair<int,int>> q;
//     pair<int,int> mp;
    
//     LRUCache(int capacity) {
//         cap = capacity;
//     }
    
//     int get(int key) {
//         if(!q.empty()) {
//             for(auto x :q) if(x.first==key) return x.second;
//             return -1;
//         }
//         return -1;
//     }
    
//     void put(int key, int value) {
//         // mp[key]=value;
//         q.push_back({key, value});     // push to end of queue...
//         int sz = q.size();
//         while(cap-sz<0) {
//             q.pop_front();
//             sz = q.size();
//         }
//     }
// };

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */



#include <bits/stdc++.h>
#include <map>
#include <stack>
#include <queue>
#include <deque>

using namespace std;


class LRUCache {
public:
    int cap;
    unordered_map<int, int> mp;
    deque<unordered_map<int,int>> q;
    
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        int found = 0;
        for(auto r : q) {
            if(r[key]) {
                found = 1;
                break;
            }
        }
        
        if(found) {
            // if found, pop all elements along with key element
            // store key element in a temp var
            // push all elements back in order
            // push key element at top
            stack<unordered_map<int,int>> stk;
            deque<unordered_map<int,int>>::iterator it = q.begin();
            while(it!=q.end()) {
                stk.push(q.front());
                q.pop_front();
                it++;
                if(it->begin()->first == key) break; // not inserting key element into stack...
            }
            auto priorityKey = q.front();
            q.pop_front(); // fucks the key element out of deque
            
            while(!stk.empty()) {
                q.push_back(stk.top());
                stk.pop();
            }
            
            q.push_back(priorityKey);
            return mp[key];
        }
        return -1;  // not found
    }
    
    void put(int key, int value) {
        mp[key]=value;
        q.push_back(mp);
        int c = cap, k = q.size();
        while(c<k) {
            q.pop_front();
            k=q.size();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */


// ["LRUCache","put","put","get","put","get","put","get","get","get"]
// [[2],[1,1],[2,2],[1],[3,3],[2],[4,4],[1],[3],[4]]

// ["LRUCache","get","put","get","put","put","get","get"]
// [[2],[2],[2,6],[1],[1,5],[1,2],[1],[2]]

// ["LRUCache","put","put","put","put","get","get"]
// [[2],[2,1],[1,1],[2,3],[4,1],[1],[2]]



// TLE
class LRUCache {
public:
    int cap;
    deque<int> q;
    unordered_map<int,int> mp;
    
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        if(find(q.begin(), q.end(), key) != q.end()) {
            
            auto it = find(q.begin(), q.end(), key);
            q.erase(it);
            
            q.push_back(key);
            return mp[key];
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(find(q.begin(), q.end(), key) == q.end()) q.push_back(key);
        else {
            // bring the key to front of deque...
            auto it = find(q.begin(), q.end(), key);
            q.erase(it);
            q.push_back(key);
        }
        mp[key]=value;
        
        int i = cap;
        while(i<q.size()) {
            q.pop_front();
            i++;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */














#define BLACKPINK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
class LRUCache {
public:
    int cap;
    list<pair<int,int>> q;
    unordered_map<int,list<pair<int,int>>::iterator> cache;
    
    // list<int>::iterator pfind(list<int>::iterator i1, list<int>::iterator i2, int key) {
    //     for(auto j=i1, k=i2--; j!=i2 && k!=i1; j++, k--) {
    //         if(*j==key) return j;
    //         if(*k==key) return k;
    //     }
    //     return i2;
    // }
    
    LRUCache(int capacity) {
        BLACKPINK
        this->cap = capacity;
    }
    
    int get(int key) {
        if (!cache.count(key))
            return -1;
        
        int ans = (*cache[key]).second;
        q.erase(cache[key]);                 // delete pair...
        q.push_front(make_pair(key,ans));    // reinsert pair at front...
        cache[key] = q.begin();              // update its position and return
        return ans;
    }
    
    void put(int key, int value) {
        if (!cache.count(key)){                 // key not found
            if (q.size() == cap){               // if we are full, delete LRU pair....
                int last = q.back().first;
                q.pop_back();
                cache.erase(last);             //...and erase its key from the cache
            }
        } else {                                // key found, just delete the pair first
            q.erase(cache[key]);
        }
        q.push_front(make_pair(key,value));     // insert/re-insert pair
        cache[key] = q.begin();                 // insert or update its position
    }
};
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */