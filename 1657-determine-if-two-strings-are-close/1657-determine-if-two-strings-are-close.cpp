class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length())
            return false;

        unordered_map<char,char>mp1;
        unordered_map<char,char>mp2; 
        vector<int>v1;
        vector<int>v2;

        for(int i=0;i<word1.size();i++)
            mp1[word1[i]]++;

        for(int i=0;i<word2.size();i++)
            mp2[word2[i]]++;

        for(auto x:mp1)
        {
            if(mp2.find(x.first)==mp2.end())
                return false;
        }

        for(auto x:mp1)
            v1.push_back(x.second);
        
        for(auto x:mp2)
            v2.push_back(x.second);

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        return v1==v2;
    }
};