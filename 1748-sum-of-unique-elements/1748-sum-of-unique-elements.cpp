class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        for(auto x:mp)
        {
            if(x.second==1)
            sum+=x.first;
        }
        return sum;
    }
};