class Solution {
public:
    int firstMatchingIndex(string s) {
        int first=0;
        int last=s.size()-1;
        while(first<=last){
            if(s[first]==s[last]){
                return first;
            }
            first++;
            last--;
        }
        return -1;
    }
};