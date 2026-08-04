class Solution {
public:
    void solve(vector<int>& nums , vector<vector<int>>& ans , int start , int size){
        if(start == size){
            ans.push_back(nums);
            return;
        }

        for(int i = start ; i < size ; i++){
            swap(nums[start] , nums[i]);
            solve(nums , ans , start+1 , size);
            swap(nums[start] , nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(nums , ans , 0 , nums.size());
        return ans;
    }
};