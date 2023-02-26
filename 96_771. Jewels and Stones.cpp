// 771. Jewels and Stones
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        unordered_map <char, int> mp;
        for(auto i: stones)
        {
            mp[i]++;
        }

        int count=0;
        
        for(auto i : jewels )
        {
            auto it = mp.find(i);
            if(it!=mp.end()) count += it->second;
        }
        return count;
    }
};
