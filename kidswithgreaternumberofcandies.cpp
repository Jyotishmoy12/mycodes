class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       int max_c=0;
        vector<bool>ans;
        for(auto a:candies)max_c=max(max_c,a);
        for(auto a:candies){
            if(a+extraCandies>=max_c)ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};
