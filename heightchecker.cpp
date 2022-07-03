class Solution {
public:
int heightChecker(vector<int>& heights){
 vector<int> s = heights;
 int res=0;
 sort(begin(s), end(s));
 for (auto i = 0; i < heights.size(); ++i) 
 res += heights[i] != s[i];
  return res;
}
};
