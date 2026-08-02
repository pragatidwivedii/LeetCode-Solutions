class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0 ;
        for(auto c : stones) {
            if(jewels.contains(c)){
                ans++;
            }
        }
        return ans;
    }
};