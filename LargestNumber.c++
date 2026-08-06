#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        // 1. Convert integers directly to string vectors
        vector<string> strs;
        strs.reserve(nums.size()); // Optimize memory allocation
        for (int num : nums) {
            strs.push_back(to_string(num));
        }
        
        // 2. Sort using an optimal custom comparator lambda
        // This avoids creating new strings repeatedly during sorting
        sort(strs.begin(), strs.end(), [](const string& a, const string& b) {
            return a + b > b + a;
        });
        
        // 3. Handle the all-zeros edge case (e.g., [0, 0])
        // If the largest element is "0", the entire result must be "0"
        if (strs[0] == "0") {
            return "0";
        }
        
        // 4. Efficiently build the final string
        string result = "";
        for (const string& s : strs) {
            result += s;
        }
        
        return result;
    }
};
