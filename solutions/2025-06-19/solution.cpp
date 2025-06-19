//Leetcode 2294 - Partition Array Such That Maximum Difference Is K
//https://leetcode.com/problems/partition-array-such-that-maximum-difference-is-k/description/?envType=daily-question&envId=2025-06-19

class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        // initialization
        int count = 0;
        int n = nums.size();
        int i = 0;
        // sorting
        sort(nums.begin(), nums.end());
        // traversing the array
        while (i < n) {
            // start
            int start = nums[i];
            i++;
            // finding end

            while (i < n && nums[i] - start <= k) {
                i++;
            }
            count++;
        }
        return count;
    }
}; 