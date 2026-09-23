#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> feq;
        for(int num : nums){
            feq[num]++;
        }
        vector<pair<int,int>> freq_pairs;
        for(auto& kv:feq){
            freq_pairs.push_back({kv.first, kv.second});
        }
          sort(freq_pairs.begin(), freq_pairs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });
        vector<int> result;
        for(int i=0;i<k;i++){
 result.push_back(freq_pairs[i].first);
        
        }
        return result;
    }
};
