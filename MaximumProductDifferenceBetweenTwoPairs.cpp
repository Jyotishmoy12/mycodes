class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxPair=nums[nums.size()-1]*nums[nums.size()-2];
        int minPair=nums[0]*nums[1];
        return maxPair-minPair;
    }
};
