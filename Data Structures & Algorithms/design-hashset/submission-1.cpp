#include <vector>
#include <list>
#include <algorithm>

class MyHashSet {
private:
    // Prime number helps in uniform distribution
    static const int numBuckets = 769;
    std::vector<std::list<int>> buckets;

    // Helper to get the bucket index
    int getHash(int key) {
        return key % numBuckets;
    }

public:
    MyHashSet() : buckets(numBuckets) {}
    
    void add(int key) {
        int index = getHash(key);
        // Check if key already exists to maintain Set properties (no duplicates)
        auto& bucket = buckets[index];
        for (int element : bucket) {
            if (element == key) return;
        }
        bucket.push_back(key);
    }
    
    void remove(int key) {
        int index = getHash(key);
        auto& bucket = buckets[index];
        // Use the built-in remove method of std::list
        bucket.remove(key);
    }
    
    bool contains(int key) {
        int index = getHash(key);
        auto& bucket = buckets[index];
        for (int element : bucket) {
            if (element == key) return true;
        }
        return false;
    }
};