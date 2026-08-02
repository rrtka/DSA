class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long int n1=LLONG_MIN;
        long long int n2=LLONG_MIN;
        long long int n3=LLONG_MIN;
        for(int x:nums){
            if(n1==x || n2==x || n3==x) continue;
            if (x>n1){
                n3=n2;
                n2=n1;
                n1=x;
            }
            else if(x>n2){
                n3=n2;
                n2=x;
            }
            else if(x>n3){
                n3=x;
            }
        }
        if(n3==LLONG_MIN){
            return n1;
        }
        return n3;
    }
};