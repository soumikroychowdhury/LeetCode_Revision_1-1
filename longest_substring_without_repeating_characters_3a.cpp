class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0,begin=-1;
        vector<int> v(256,-1);
        for(int i=0;i<s.size();i++){
            if(v[s[i]]>begin) begin=v[s[i]];
            v[s[i]]=i, ans=max(ans,i-begin);
        }
        return ans;
    }
};