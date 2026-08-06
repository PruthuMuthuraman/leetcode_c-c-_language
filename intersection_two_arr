// 
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> r;
        
        // 1. Sort both vectors first
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());
        
        int i = 0;
        int j = 0;
        
        // 2. Traversal with two pointers until either array ends
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                r.push_back(nums1[i]); // Found a common element
                i++;
                j++;
            } 
            else if (nums1[i] < nums2[j]) {
                i++; // Move the smaller pointer forward
            } 
            else {
                j++; 
            }
        }
        
        return r;
    }
};
