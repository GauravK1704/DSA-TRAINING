class Solution {
public:
    string minWindow(string s, string t) {
        
        if(s.length() < t.length()) return "";
        
        unordered_map<char,int> mp;
        
        for(char c : t){
            mp[c]++;
        }
        
        int left = 0;
        int right = 0;
        int count = t.length();
        
        int minLen = INT_MAX;
        int startIndex = 0;
        
        while(right < s.length()){
            
            if(mp[s[right]] > 0){
                count--;
            }
            
            mp[s[right]]--;
            right++;
            
            while(count == 0){
                
                if(right - left < minLen){
                    minLen = right - left;
                    startIndex = left;
                }
                
                mp[s[left]]++;
                
                if(mp[s[left]] > 0){
                    count++;
                }
                
                left++;
            }
        }
        
        if(minLen == INT_MAX) return "";
        
        return s.substr(startIndex, minLen);
    }
};