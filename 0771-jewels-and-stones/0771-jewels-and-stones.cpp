class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int>mp;
        int count=0;
        for(int i=0;i<stones.size();i++)
        {
            mp[stones[i]]++;
        }
        for(int i=0;i<jewels.size();i++)
        {
            count+=mp[jewels[i]];
        }
        return count;
    }
};