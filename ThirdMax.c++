#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // 1. Sort in descending order (largest to smallest)
        sort(nums.begin(), nums.end(), greater<int>());
        
        int distinct_count = 1;
        
        // 2. Loop through and find the 3rd distinct maximum
        for (size_t i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                distinct_count++;
            }
            
            // As soon as we find the 3rd distinct number, return it
            if (distinct_count == 3) {
                return nums[i];
            }
        }
        
        // 3. If there are fewer than 3 distinct numbers, return the maximum
        return nums[0];
    }
};
