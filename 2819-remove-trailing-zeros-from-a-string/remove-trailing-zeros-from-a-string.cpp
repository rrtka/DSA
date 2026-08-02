class Solution {
public:
    string removeTrailingZeros(string num) {
        int last=num.size()-1;
        int c=0;
        while(num[last]=='0'){
            c++;
            last--;
        }
        string ns=num.substr(0,num.size()-c);
        return ns;
    }
};