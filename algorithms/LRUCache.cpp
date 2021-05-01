#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <queue>
using namespace std;

class LRUCache {
  public:
  int capacity;
  unordered_map<int, int> mp;
  queue<pair<int, int>> q;

  LRUCache(int capacity) {
    this->capacity = capacity;
  }

  // Return the value of the key if the key exists, otherwise return -1.
  int get(int key) {
    if(mp.find(key) != mp.end()) {
      return mp[key];
      // Update the queue...

    }
    return -1;
  }

  // Update the value of the key if the key exists. 
  // Otherwise, add the key-value pair to the cache. 
  // If the number of keys exceeds the capacity from this operation, 
  // evict the least recently used key.
  void put(int key, int value) {
    mp[key] = value;
    q.push({key, value});
    if(q.size() >= this->capacity) {
      mp[key] = 
    }
  }
};

int main() {
  int capacity, key, value;
  cin >> capacity;
  LRUCache obj(capacity);


  obj.get(key);
  obj.put(key, value);

}