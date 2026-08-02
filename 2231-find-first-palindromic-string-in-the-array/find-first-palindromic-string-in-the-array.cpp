class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string s:words){
            int start=0;
            int c=1;
            int last=s.size()-1;
            while(start<last){
                if(s[start]!=s[last]){
                    c=0;
                    break;
                }
                start++;
                last--;
            }
            if(c==1){
                return s;
            }
        }
        return "";
    }
};