class Solution {
public:
    string removeTrailingZeros(string num) {
        int last=num.size()-1;
        while(num[last]=='0'){
            last--;
        }
        return num.substr(0,last+1);
    }
};