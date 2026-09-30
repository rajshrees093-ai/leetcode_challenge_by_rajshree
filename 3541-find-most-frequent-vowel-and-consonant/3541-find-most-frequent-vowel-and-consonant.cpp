class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mp;
        int max1=0;
        int max2=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                max1=max(max1,mp[s[i]]);
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
                max2=max(max2,mp[s[i]]);
        }
        return max1+max2;
    }
};