// 387. First Unique Character in a String


class Solution {
public:
    int firstUniqChar(string s) {

    map<char, int> mp;
    for (auto i : s)
        mp[i]++;

    int j = 0;
    for (auto i : s)
    {
        auto f =mp.find(i);
        if(f!=mp.end() && f->second==1) return j;
        j++;
    }
    return -1;
    }
};
