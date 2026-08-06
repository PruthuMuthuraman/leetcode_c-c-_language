class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int one =0;
        for (int i : nums){
            one =one^i;   // ^ its xor operator bitwise implementation of xor 
        }
        return  one ;
        
    }
};
