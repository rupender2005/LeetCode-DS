class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int l=s.length();
        int m=t.length();
        if(m!=l){
            return false;
        }
        for(int i=0;i<l;i++){
            if(s[i]!=t[i]){
                return false;
            }
        }
        return true;
    }
};